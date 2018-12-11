using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class DontDestoryOnLoad : MonoBehaviour
{ 
    //Meta references to panels we need to show/hide
    public GameObject PlayScreen;
    public GameObject TitleScreen;
    public GameObject SelectionScreen;
    public GameObject StoryMode;
    public GameObject LevelMode;
    public GameObject ChallengeMode;

    //Member to represent using WebGL
    private bool WebGL;

    //Reference to our Authenication service.
    private PlayFabService _PlayFabService = PlayFabService.Instance;

    // Use this for initialization
    void Start()
    {
        WebGL = false;
    }

    //Update frame
    public void Update()
    {
        //Used to fixed LevelMenu.cs NextLevel() function.
        if (PlayScreen.activeInHierarchy == false &&
            TitleScreen.activeInHierarchy == false &&
            SelectionScreen.activeInHierarchy == false &&
            StoryMode.activeInHierarchy == false &&
            LevelMode.activeInHierarchy == false &&
            ChallengeMode.activeInHierarchy == false &&
            SceneManager.sceneCount == 1
            )
        {
            SelectionScreen.SetActive(true);
        }

        //Determines if using WebGL, and if it is true then skip login
        if(Application.platform == RuntimePlatform.WebGLPlayer && !WebGL)
        {
            SkipLogin();
            WebGL = true;
        }
    }

    ///SkipLogin()
    /// <summary>
    /// show SelectionScreen Panel instead of PlayScreen Panel.
    /// </summary>
    /// Pre-Condition: Must WebGL platform.
    /// Post-Condition: Move to SelectionScreen Panel.
    private void SkipLogin()
    {
        PlayScreen.SetActive(false);
        SelectionScreen.SetActive(true);
    }

    ///Login()
    /// <summary>
    /// Login via WebGL
    /// </summary>
    /// Pre-Condition: Must WebGL platform.
    /// Post-Condition: Logins in.
    public void Login()
    {
        if (Application.platform == RuntimePlatform.WebGLPlayer)
        {
            _PlayFabService.Authenticate(Authtypes.EmailAndPassword);
        }
    }

    ///SetEmail(string)
    /// <summary>
    /// Retrieves email from WebGL.
    /// </summary>
    /// <param name="email"></param>
    /// Pre-Condition: Must WebGL platform.
    /// Post-Condition: Saves email.
    public void SetEmail(string email)
    {
        if (Application.platform == RuntimePlatform.WebGLPlayer)
        {
            _PlayFabService.Email = email;
        }
    }

    ///SetPass(string)
    /// <summary>
    /// Retrieves password from WebGL.
    /// </summary>
    /// <param name="pass"></param>
    /// Pre-Condition: Must WebGL platform.
    /// Post-Condition: Saves email.
    public void SetPass(string pass)
    {
        if (Application.platform == RuntimePlatform.WebGLPlayer)
        {
            _PlayFabService.Password = pass;
        }
    }

    ///LogOut()
    /// <summary>
    /// Log out and close Application
    /// </summary>
    /// Pre-Condition: Must WebGL platform.
    /// Post-Condition: Log out and close Application
    public void LogOut()
    {
        _PlayFabService.Logout();
        Application.Quit();
    }
}
