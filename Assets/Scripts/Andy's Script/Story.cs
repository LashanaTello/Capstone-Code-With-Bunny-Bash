using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using PlayFab;
using PlayFab.ClientModels;
using System;

public class Story : MonoBehaviour
{
    //Meta fields for objects in the UI
    public Button InstructionButton;
    public Button Level1Button;
    public Button Level2Button;
    public Button Level3Button;
    public Button Level4Button;
    public Button Level5Button;
    public Button Level6Button;
    public Button Level7Button;
    public Button Level8Button;
    public Button BackButton;

    //Meta references to panels we need to show/hide
    public GameObject CurrentPanel;
    public GameObject PreviousPanel;

    //Use for showButton function
    public int MaxLevel;    
    private const int MaxButton = 8;    

    //Reference to our Authenication service.
    private PlayFabService _PlayFabService = PlayFabService.Instance;

    //SQLite3 db
    private PlayerPref pf;

    // Use this for initialization
    void Start () {
        //Set all panels to Hide until we need them
        PreviousPanel.SetActive(false);

        //Used for getting max level;
        PlayFabService.DataResult += GetMaxLevel;
        InvokeRepeating("getData", 0.1f, 1.0f);

        //Adding functions to buttons.
        if (InstructionButton != null)
        InstructionButton.onClick.AddListener(delegate { Level(0); });
        Level1Button.onClick.AddListener(delegate { Level(1); });
        Level2Button.onClick.AddListener(delegate { Level(2); });
        Level3Button.onClick.AddListener(delegate { Level(3); });
        Level4Button.onClick.AddListener(delegate { Level(4); });
        Level5Button.onClick.AddListener(delegate { Level(5); });
        Level6Button.onClick.AddListener(delegate { Level(6); });
        Level7Button.onClick.AddListener(delegate { Level(7); });
        Level8Button.onClick.AddListener(delegate { Level(8); });

        //Always show level 1
        Level1Button.gameObject.SetActive(true);

        //Disable level button. Will only show them if they have won the previous level.
        Level2Button.gameObject.SetActive(false);
        Level3Button.gameObject.SetActive(false);
        Level4Button.gameObject.SetActive(false);
        Level5Button.gameObject.SetActive(false);
        Level6Button.gameObject.SetActive(false);
        Level7Button.gameObject.SetActive(false);
        Level8Button.gameObject.SetActive(false);

        BackButton.onClick.AddListener(back);

        showButton();
        pf = new PlayerPref();
    }

    //Update Frame
    void Update()
    {
        showButton();
    }

    ///getData()
    /// <summary>
    /// Use PlayFab API call to get data.
    /// </summary>
    /// Pre-Condition: Must be Logged in.
    /// Post-Condition: Get all the data through GetMaxLevel function.
    private void getData()
    {
        int currentMax = 0;
        for (int i = 1; i <= 8; i++)
        {
            if (pf.GetIntValue("Level " + i) != "" || pf.GetIntValue("Level " + i) != pf.GetIntValue("Nothing"))
                if (currentMax < i)
                    currentMax = i;
        }
        MaxLevel = currentMax;
        _PlayFabService.Data(PlayFabService.PlayerDataTypes.GetData);
    }

    //showButton()
    /// <summary>
    /// Show buttons those level associated with the button have been completed or currently on.
    /// </summary>
    /// Pre-Condition: None.
    /// Post-Condition: Buttons Shown depending on User Progress in the Level.
    private void showButton()
    {
        //Show Level that are completed and the following level.
        int lvl;
        if (!Level2Button.gameObject.activeSelf)
        {
            int.TryParse(Level2Button.GetComponentInChildren<Text>().text, out lvl);
            if (lvl <= MaxLevel + 1)
            {
                Level2Button.gameObject.SetActive(true);
            }
            else
                Level2Button.gameObject.SetActive(false);
        }
        if (!Level3Button.gameObject.activeSelf)
        {
            int.TryParse(Level3Button.GetComponentInChildren<Text>().text, out lvl);
            if (lvl <= MaxLevel + 1)
            {
                Level3Button.gameObject.SetActive(true);
            }
            else
                Level3Button.gameObject.SetActive(false);
        }
        if (!Level4Button.gameObject.activeSelf)
        {
            int.TryParse(Level4Button.GetComponentInChildren<Text>().text, out lvl);
            if (lvl <= MaxLevel + 1)
            {
                Level4Button.gameObject.SetActive(true);
            }
            else
                Level4Button.gameObject.SetActive(false);
        }
        if (!Level5Button.gameObject.activeSelf)
        {
            int.TryParse(Level5Button.GetComponentInChildren<Text>().text, out lvl);
            if (lvl <= MaxLevel + 1)
            {
                Level5Button.gameObject.SetActive(true);
            }
            else
                Level5Button.gameObject.SetActive(false);
        }
        if (!Level6Button.gameObject.activeSelf)
        {
            int.TryParse(Level6Button.GetComponentInChildren<Text>().text, out lvl);
            if (lvl <= MaxLevel + 1)
            {
                Level6Button.gameObject.SetActive(true);
            }
            else
                Level6Button.gameObject.SetActive(false);
        }
        if (!Level7Button.gameObject.activeSelf)
        {
            int.TryParse(Level7Button.GetComponentInChildren<Text>().text, out lvl);
            if (lvl <= MaxLevel + 1)
            {
                Level7Button.gameObject.SetActive(true);
            }
            else
                Level7Button.gameObject.SetActive(false);
        }
        if (!Level8Button.gameObject.activeSelf)
        {
            int.TryParse(Level8Button.GetComponentInChildren<Text>().text, out lvl);
            if (lvl <= MaxLevel + 1)
            {
                Level8Button.gameObject.SetActive(true);
            }
            else
                Level8Button.gameObject.SetActive(false);
        }

    }

    ///Resume()
    /// <summary>
    /// Story/Level mode UI will be shown.
    /// </summary>
    /// Pre-Condition: None.
    /// Post-Condition: Story/Level mode UI will be shown.
    public void Resume()
    {
        CurrentPanel.SetActive(true);
    }

    ///back()
    /// <summary>
    /// Story/Level mode UI will be hidden.
    /// Mode Selection UI will be shown.
    /// </summary>
    /// Pre-Condition: None.
    /// Post-Condition: Story/Level mode UI will be hidden. Mode Selection UI will be shown.
    private void back()
    {
        CurrentPanel.SetActive(false);
        PreviousPanel.SetActive(true);
    }

    ///Level(int)
    /// <summary>
    /// Go to the scene coresponding to the param lvl.
    /// </summary>
    /// <param name="lvl"></param>
    /// Pre-Condition: lvl is an positive int.
    /// Post-Condition: The level scene will be shown.
    private void Level(int lvl)
    {
        SceneManager.LoadScene("Level " + lvl, LoadSceneMode.Additive);
    }

    ///GetMaxLevel(GetUserDataResult)
    /// <summary>
    /// Print the Game statistic data.
    /// </summary>
    /// <param name="result"></param>
    /// Pre-Condition: Display() have been called with interent.
    /// Post-Condition: User will be inform about the level and it's score
    private void GetMaxLevel(GetUserDataResult result)
    {
        int currentMax = 0;
        int lvl;
        foreach (var entry in result.Data)
        {
            string[] levelName = entry.Key.Split(' ');
            if (levelName.Length == 2)
            {
                int.TryParse(levelName[1], out lvl);
                if (lvl > currentMax)
                {
                    currentMax = lvl;
                }
            }
        }
        MaxLevel = currentMax;
    }
}
