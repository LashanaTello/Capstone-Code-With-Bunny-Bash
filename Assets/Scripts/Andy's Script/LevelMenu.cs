using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LevelMenu : MonoBehaviour{

    //Meta fields for objects in the UI
    public Button LevelMenuButton;
    public Button RestartButton;
    public Button MainMenuButton;
    public Button ResumeButton;
    public Button NextLevelButton;
    public Text LevelText;
    public Text WinText;

    //Meta references to panels we need to show/hide
    public GameObject Menu;
    public GameObject Story;
    private string level;
    Animator anim;

    //Member to keep track of Won status
    private bool IsWin;


    // Use this for initialization
    void Start()
    {
        WinText.text = "";
        level = SceneManager.GetSceneAt(SceneManager.sceneCount - 1).name;
        LevelText.text = level + " Menu";

        LevelMenuButton.onClick.AddListener(OpenMenu);
        RestartButton.onClick.AddListener(RestartLevel);
        MainMenuButton.onClick.AddListener(MainMenu);
        ResumeButton.onClick.AddListener(Resume);
        NextLevelButton.onClick.AddListener(NextLevel);
        anim = GetComponent<Animator>();

        MainMenuButton.gameObject.SetActive(true);
        RestartButton.gameObject.SetActive(true);
        ResumeButton.gameObject.SetActive(true);
        NextLevelButton.gameObject.SetActive(false);

        Story = GameObject.FindGameObjectWithTag("Story");
        if (Story != null)
        {
            Story.SetActive(false);
        }


        IsWin = false;
    }

    //Update frame
    void Update()
    {
        //Pop up the level menu after winning a level.
        if(WinText.text == "You win!" && !IsWin)
        {
            IsWin = true;
            StartCoroutine(Win());
        }
    }

    ///Win()
    /// <summary>
    /// After 3 seconds, the level menu UI will appear.
    /// </summary>
    /// <returns>A time interval of 3 seconds</returns>
    /// Pre-Condition: None.
    /// Post-Condition: Level Menu UI appears.
    private IEnumerator Win()
    {
        yield return new WaitForSeconds(3);
        OpenMenu();
        ResumeButton.gameObject.SetActive(false);
        NextLevelButton.gameObject.SetActive(true);
        LevelText.text = level + " Won!";
    }

    ///OpenMenu()
    /// <summary>
    /// Level Menu Appears.
    /// </summary>
    /// Pre-Condition: None.
    /// Post-Condition: Level Menu UI appears.
    private void OpenMenu()
    {
        MainMenuButton.gameObject.SetActive(true);
        RestartButton.gameObject.SetActive(true);
        ResumeButton.gameObject.SetActive(true);
        NextLevelButton.gameObject.SetActive(false);
        Menu.SetActive(true);
    }

    ///RestartLevel()
    /// <summary>
    /// Level restarts.
    /// </summary>
    /// Pre-Condition: None.
    /// Post-Condition: Level restarts.
    private void RestartLevel()
    {

        level = SceneManager.GetSceneAt(SceneManager.sceneCount - 1).name;
        if (SceneManager.sceneCount == 1)
        {
            SceneManager.LoadScene(level, LoadSceneMode.Single);
            return;
        }

        SceneManager.UnloadSceneAsync(level);
        SceneManager.LoadSceneAsync(level, LoadSceneMode.Additive);
        anim.SetBool("restart", true);
        GetComponent<Animator>().Play("idle");
    }

    ///MainMenu()
    /// <summary>
    /// returns back to the Title Screen scene.
    /// </summary>
    /// Pre-Condition: Game must be played from Title Screen scene.
    /// Post-Condition: Returned to the Title Screen scene.
    private void MainMenu()
    {
        SceneManager.UnloadSceneAsync(level);
        if (Story != null)
        {
            Story.gameObject.SetActive(true);
        }
            
    }
    
    ///Resume()
    /// <summary>
    /// closes the level menu
    /// </summary>
    /// Pre-Condition: Level Menu UI is shown.
    /// Post-Condition: Level Menu UI is hidden.
    private void Resume()
    {
        Menu.SetActive(false);
    }

    ///NextLevel()
    /// <summary>
    /// Goes to the next level if there is any.
    /// </summary>
    /// Pre-Condition: the next level must have the same scene name but with a number one higher.
    /// Post-Condition: This scene is unloaded and the next scene is loaded.
    private void NextLevel()
    {
        string[] levelName = level.Split(' ');
        SceneManager.UnloadSceneAsync(level);
        int lvl;

        if (levelName.Length == 3)
        {
            int.TryParse(levelName[2], out lvl);
            lvl++;
            SceneManager.LoadSceneAsync(levelName[0] + " " + levelName[1] + " " + lvl, LoadSceneMode.Additive);
        }
        else if(levelName.Length == 2)
        {
            int.TryParse(levelName[1], out lvl);
            lvl++;
            SceneManager.LoadSceneAsync(levelName[0] + " " + lvl, LoadSceneMode.Additive);
        }
    }
}
