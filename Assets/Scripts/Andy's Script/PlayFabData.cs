using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using PlayFab;
using PlayFab.ClientModels;
using System;

public class PlayFabData : MonoBehaviour {
    //Meta fields for objects in the UI
    public Button StoryButton;
    public Button LevelButton;
    public Button ChallengeButton;
    public Button AccountButton;
    public Button Logout;
    public Text Title;
    public Button CreditButton;

    //Account Panel UI
    public Button CloseButton;
    public Button ClearButton;
    public Button LinkButton;
    public Text LinkText;
    public Text Level;

    //Meta references to panels we need to show/hide
    public GameObject CurrentPanel;
    public GameObject StoryPanel;
    public GameObject LevelPanel;
    public GameObject ChallengePanel;
    public GameObject AccountPanel;

    //Reference to our Authenication service.
    private PlayFabService _PlayFabService = PlayFabService.Instance;

    //Reference to our offline data.
    private PlayerPref pf;


    // Use this for initialization
    void Start()
    {
        //Set all panels to Hide until we need them
        StoryPanel.SetActive(false);
        LevelPanel.SetActive(false);
        ChallengePanel.SetActive(false);
        AccountPanel.SetActive(false);
        //Logout Button
        Logout.onClick.AddListener(LogOut);
        //Linking and unlinking device
        LinkButton.onClick.AddListener(LinkAndUnlink);
        //Opening and closing account panel
        AccountButton.onClick.AddListener(OpenAccount);
        CloseButton.onClick.AddListener(CloseAccount);
        ClearButton.onClick.AddListener(ClearData);
        //Story mode
        StoryButton.onClick.AddListener(Storymode);
        LevelButton.onClick.AddListener(Levelmode);
        ChallengeButton.onClick.AddListener(Challengemode);
        //Credit page
        CreditButton.gameObject.SetActive(true);
        CreditButton.onClick.AddListener(GoToCredit);

        //Subscribe to events that happen after we get data
        PlayFabService.DataResult += DataResult;
        pf = new PlayerPref();

        //Remove Some UI for WebGL
        if (Application.platform == RuntimePlatform.WebGLPlayer)
        {
            Logout.gameObject.SetActive(false);
            LinkButton.gameObject.SetActive(false);
            Title.gameObject.SetActive(false);
        }
    }

    ///GoToCredit()
    /// <summary>
    /// Go to the scene with credit.
    /// </summary>
    /// Pre-Condition: None.
    /// Post-Condition: Loaded scene with credit.
    private void GoToCredit()
    {
        SceneManager.LoadScene("Credits", LoadSceneMode.Additive);
        CurrentPanel.SetActive(false);
    }

    ///OpenAccount()
    /// <summary>
    /// Show Account UI
    /// </summary>
    ///Pre-Condition: None. 
    ///Post-Condition: Account UI will be shown.
    private void OpenAccount()
    {
        AccountPanel.SetActive(true);
        Display();
    }

    ///CloseAccount()
    /// <summary>
    /// Hide Account UI
    /// </summary>
    ///Pre-Condition: Account UI must be shown. 
    ///Post-Condition: Account UI will be hidden.
    private void CloseAccount()
    {
        AccountPanel.SetActive(false);
    }

    ///Login(string)
    /// <summary>
    /// Login with WebGL
    /// </summary>
    /// <param name="WebGL"></param>
    /// Pre-Condition: Must be WebGL platform
    /// Post-Condition: Logged in PlayFab account
    public void Login(string WebGL)
    {
        _PlayFabService.AuthenticateWebGL(WebGL);
    }

    ///Logout()
    /// <summary>
    /// Log User off.
    /// </summary>
    /// Pre-Condition: Must be logged in.
    /// Post-Condition: Logged off.
    public void LogOut()
    {
        _PlayFabService.Logout();
    }


    ///ClearData()
    /// <summary>
    /// Clear data from the logged PlayFab account and device.
    /// </summary>
    ///Pre-Condition: Must be signed into a PlayFab account
    ///Post-Condition: Data from the logged PlayFab account and device will be delete.
    private void ClearData()
    {
        pf.ResetData();
        _PlayFabService.Data(PlayFabService.PlayerDataTypes.ClearData);
        Display();
    }


    ///Display()
    /// <summary>
    /// Show User's statistic
    /// </summary>
    ///Pre-Condition: Account UI must be shown 
    ///Post-Condition: User will be inform about the level and it's score.
    private void Display()
    {   
        Level.text = "Progress: \n";
        for (int i = 1; i <= 8; i++)
        {
            if (pf.GetIntValue("Level " + i) != "" || pf.GetIntValue("Level " + i) != pf.GetIntValue("Nothing"))
            {
                Level.text += "Level " + i + ": " + pf.GetIntValue("Level " + i) + System.Environment.NewLine;
            }
        }
        for (int i = 1; i <= 2; i++)
        {
            if (pf.GetIntValue("Challenge Level " + i) != "" || pf.GetIntValue("Challenge Level " + i) != pf.GetIntValue("Nothing"))
                Level.text += "Challenge Level " + i + ": " + pf.GetIntValue("Level " + i) + System.Environment.NewLine;
        }
        _PlayFabService.Data(PlayFabService.PlayerDataTypes.GetData);
    }

    ///DataResult(GetUserDataResult)
    /// <summary>
    /// Print the Game statistic data.
    /// </summary>
    /// <param name="result"></param>
    /// Pre-Condition: Display() have been called with interent.
    /// Post-Condition: User will be inform about the level and it's score
    private void DataResult(GetUserDataResult result)
    {
        bool hasprogress = false;
        Level.text = "Progress: \n";
        foreach (var entry in result.Data)
        {
            hasprogress = true;
            Level.text += entry.Key + ": " + entry.Value.Value + "\n";
        }
        if (!hasprogress)
        {
            Level.text += "None";
        }

    }

    ///Storymode()
    /// <summary>
    /// Show Story mode UI
    /// </summary>
    ///Pre-Condition: None. 
    ///Post-Condition: Storymode UI will be show.
    private void Storymode()
    {
        CurrentPanel.SetActive(false);
        StoryPanel.SetActive(true);
    }

    ///Levelmode()
    /// <summary>
    /// Show Level mode UI
    /// </summary>
    ///Pre-Condition: None. 
    ///Post-Condition: Levelmode UI will be show.
    private void Levelmode()
    {
        CurrentPanel.SetActive(false);
        LevelPanel.SetActive(true);
    }

    ///Challengemode()
    /// <summary>
    /// Show Challenge mode UI
    /// </summary>
    ///Pre-Condition: None. 
    ///Post-Condition: Challengemode UI will be show.
    private void Challengemode()
    {
        CurrentPanel.SetActive(false);
        ChallengePanel.SetActive(true);
    }

    ///LinkAndUnlink()
    /// <summary>
    /// Link device to PlayFab account
    /// </summary>
    ///Pre-Condition: Account UI must be shown. 
    ///Post-Condition: If device is not link then the device will be linked to the PlayFab account.
    ///                If device is linked then the device will be unlinked to the PlayFab account.
    private void LinkAndUnlink()
    {
        switch(LinkText.text)
        {
            case "Link Device":
                _PlayFabService.LinkDevice();
                LinkText.text = "Unlink Device";
                break;
            case "Unlink Device":
                _PlayFabService.UnlinkSilentAuth();
                LinkText.text = "Link Device";
                break;
        }
    }



}
