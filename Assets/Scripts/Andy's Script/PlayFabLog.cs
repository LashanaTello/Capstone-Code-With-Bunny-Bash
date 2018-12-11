using System;
using System.Collections;
using System.Collections.Generic;
using PlayFab;
using PlayFab.ClientModels;
using UnityEngine;
using UnityEngine.UI;

public class PlayFabLog : MonoBehaviour
{
    //Debug Flag to reset RememberMe
    public bool ClearPlayerPrefs;

    //Meta fields for objects in the UI
    public InputField LoginEmailAddress;
    public InputField LoginPassword;
    public InputField RegisterEmailAddress;
    public InputField RegisterPassword;
    public InputField RegisterConfirmPassword;

    public Button GuessButton;
    public Button LoginCarrot;
    public Button RegisterCarrot;
    public Button LoginButton;
    public Button RegisterButton;
    public Toggle RememberMe;
    public Text Notification;

    //Meta references to panels we need to show/hide
    public GameObject LoginPanel;
    public GameObject RegisterPanel;
    public GameObject SelectScene;
    public GameObject CurrentPanel;

    //Settings for what data to get from playfab on login.
    public GetPlayerCombinedInfoRequestParams InfoRequestParams;

    //Reference to our Authenication service.
    private static PlayFabService _PlayFabService = PlayFabService.Instance;

    //What happens when the scene is switched,
    public void Awake()
    {
        //Reset RememberMe
        if (ClearPlayerPrefs)
        {
            _PlayFabService.ClearRememberMe();
            _PlayFabService.AuthType = Authtypes.None;
        }

        //Set our remember me button to our remembered state.
        RememberMe.isOn = _PlayFabService.RememberMe;

        //Subscribe to our Remember Me toggle
        RememberMe.onValueChanged.AddListener((toggle) =>
        {
            _PlayFabService.RememberMe = toggle;
        });
    }
    
    void Update()
    {
        if(Notification.text == "Cannot resolve destination host")
        {
            CurrentPanel.SetActive(false);
            SelectScene.SetActive(true);
        }
    }

    void Start()
    {
        //Used as Displaying Status for Player.
        Notification.text = "";

        //Show the Current UI (the object that has this script attached to).
        CurrentPanel.SetActive(true);

        //Hide all our panels until we know what UI to display
        LoginPanel.SetActive(false);
        RegisterPanel.SetActive(false);
        SelectScene.SetActive(false);
        RegisterPanel.SetActive(false);

        //Subscribe to events that happen after we authenticate
        PlayFabService.OnLoginSuccess += OnLoginSuccess;
        PlayFabService.OnRegisterSuccess += OnRegisterSuccess;
        PlayFabService.OnPlayFabError += OnRegisterFailure;

        //Bind to UI buttons to perform actions when user interacts with the UI.
        LoginButton.onClick.AddListener(OnLoginClicked);
        RegisterButton.onClick.AddListener(OnRegisterButtonClicked);
        LoginCarrot.onClick.AddListener(ShowLogin);
        RegisterCarrot.onClick.AddListener(ShowRegister);
        GuessButton.onClick.AddListener(DeviceRegister);

        //Set the data we want at login from what we chose in our meta data.
        _PlayFabService.InfoRequestParams = InfoRequestParams;

        //Start the authentication process.
        _PlayFabService.Authenticate();
    }

    ///ShowRegister()
    /// <summary>
    /// Hide the initial button UI and show the Register UI.
    /// </summary>
    /// Pre-Condition: None.
    /// Post-Condition: Registering UI will be shown.
    private void ShowRegister()
    {
        LoginCarrot.gameObject.SetActive(false);
        RegisterCarrot.gameObject.SetActive(false);
        RegisterPanel.SetActive(true);

    }

    ///ShowLogin()
    /// <summary>
    /// Hide the initial button UI and show the Login UI.
    /// </summary>
    /// Pre-Condition: None.
    /// Post-Condition: Login UI will be shown.
    private void ShowLogin()
    {
        LoginCarrot.gameObject.SetActive(false);
        RegisterCarrot.gameObject.SetActive(false);
        LoginPanel.SetActive(true);
    }

    ///OnLoginSuccess(PlayFab.ClientModels.LoginResult)
    /// <summary>
    /// Message on successful Login
    /// </summary>
    /// <param name="result"></param>
    /// Pre-Condition: None.
    /// Post-Condition: Inform User that they have logged in.
    private void OnLoginSuccess(PlayFab.ClientModels.LoginResult result)
    {
        //Dubug Message
        Debug.LogFormat("Logged In as : {0}", result.PlayFabId);

        //Show our next screen if we logged in successfully.
        RegisterPanel.SetActive(false);
        SelectScene.SetActive(true);
        //Hide CurrentScene
        CurrentPanel.SetActive(false);
    }
    
    ///OnLoginSuccess(PlayFab.ClientModels.LoginResult)
    /// <summary>
    /// Message on successful Register
    /// </summary>
    /// <param name="result"></param>
    /// Pre-Condition: None.
    /// Post-Condition: Inform User that they have succesfully register a new PlayFab account.
    private void OnRegisterSuccess(PlayFab.ClientModels.LoginResult result)
    {
        //Dubug Message
        Debug.LogFormat("Created PlayFab ID as : {0}", result.PlayFabId);

        //Hide Register Panel, bring back the title screen
        RegisterPanel.SetActive(false);

        //Buttons for login and register
        LoginCarrot.gameObject.SetActive(true);
        RegisterCarrot.gameObject.SetActive(true);
    }

    
    ///OnRegisterFailure(PlayFabError)
    /// <summary>
    /// Message on unsuccessful Register
    /// </summary>
    /// <param name="error"></param>
    /// Pre-Condition: None.
    /// Post-Condition: Inform User that they have did not register a new PlayFab account and the reason.
    private void OnRegisterFailure(PlayFabError error)
    {
        //Inform which inputfield have problems
        switch (error.Error)
        {
            case PlayFabErrorCode.InvalidEmailAddress:
                Notification.text = "Invalid Email Address";
                break;
            case PlayFabErrorCode.InvalidPassword:
                Notification.text = "Invalid Password";
                break;
            case PlayFabErrorCode.InvalidEmailOrPassword:
                Notification.text = "Invalid Email or Password";
                break;
            case PlayFabErrorCode.EmailAddressNotAvailable:
                Notification.text = "Email Address already exists";
                break;
            case PlayFabErrorCode.AccountNotFound:
                Notification.text = "Account does not exist";
                RegisterPanel.SetActive(true);
                return;
            default:
                Notification.text = error.ErrorMessage;
                break;
        }
        //Debug Message
        Debug.Log(error.Error);
        Debug.LogError(error.GenerateErrorReport());
    }

    ///OnLoginClick()
    /// <summary>
    /// When LoginButton is click, it will a LoginRequest to PlayFab with the information from EmailAddress and Password.
    /// </summary>
    /// Pre-Condition: User click on the Login button with this function.
    /// Post-Condition: If the Email and Password are valid then the User will be logged in, otherwise the User will be inform of unsuccessful login.
    private void OnLoginClicked()
    {
        Notification.text = string.Format("Logging In As {0} ...", LoginEmailAddress.text);
        if (LoginPassword.text.Length < 6 || LoginPassword.text.Length > 100)
        {
            Notification.text = "Passwords length must be between 6 to 100 characters long.";
            return;
        }

        _PlayFabService.Email = LoginEmailAddress.text;
        _PlayFabService.Password = LoginPassword.text;
        _PlayFabService.Authenticate(Authtypes.EmailAndPassword);
    }

    ///OnRegisterButtonClicked()
    /// <summary>
    /// Registering an account with EmailAddress and Password.
    /// </summary>
    /// Pre-Condition: User click on the Register button with this function.
    /// Post-Condition: If the Email and Password are valid and the Email is not taken then the PlayFab account will be created, otherwise the User will be inform of unsuccessful register.
    private void OnRegisterButtonClicked()
    {
        if (RegisterPassword.text != RegisterConfirmPassword.text)
        {
            Notification.text = "Passwords do not Match.";
            return;
        }
        if (RegisterPassword.text.Length < 6 || RegisterPassword.text.Length > 100)
        {
            Notification.text = "Passwords length must be between 6 to 100 characters long.";
            return;
        }

        Notification.text = string.Format("Registering User {0} ...", RegisterEmailAddress.text);

        _PlayFabService.Email = RegisterEmailAddress.text;
        _PlayFabService.Password = RegisterPassword.text;
        _PlayFabService.Authenticate(Authtypes.RegisterPlayFabAccount);
    }

    ///DeviceRegister()
    /// <summary>
    /// Using the device for login
    /// </summary>
    /// Pre-Condition: None.
    /// Post-Condition: If the device is linked to an existing PlayFab account then it will login to that account.
    ///                 If the device is not linked to an existing PlayFab account then it will prompt the register form.
    private void DeviceRegister()
    {
        _PlayFabService.Authenticate(Authtypes.Silent);
    }
}