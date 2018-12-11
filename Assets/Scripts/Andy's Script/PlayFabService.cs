using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PlayFab;
using PlayFab.ClientModels;
using LoginResult = PlayFab.ClientModels.LoginResult;
using System;

public class PlayFabService: PlayFabAuthService
{
    //Events to subscribe to for this service
    public static event LoginSuccessEvent OnLoginSuccess;

    public delegate void RegisterSuccessEvent(LoginResult success);
    public static event RegisterSuccessEvent OnRegisterSuccess;
    
    public static event PlayFabErrorEvent OnPlayFabError;

    public delegate void DataResultEvent(GetUserDataResult result);
    public static event DataResultEvent DataResult;


    //These are fields that we set when we are using the service.
    public GetUserDataRequest DataRequestParams;
    public static Dictionary<String, String> _data;
    
    //Placeholder for PlayFab ID & Session Tickets
    private static string _playFabId;
    private static string _sessionTicket;

    //Members for storing permanent keys. 
    private const string _LoginRememberKey = "PlayFabLoginRemember";
    private const string _PlayFabRememberMeIdKey = "PlayFabIdPassGuid";
    private const string _PlayFabAuthTypeKey = "PlayFabAuthType";

    //Keys to delete
    private static List<String> _Key = new List<string>();
    
    //Accessability to Instance
    public static PlayFabService Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = new PlayFabService();
            }
            return _instance;
        }
    }

    //Store PlayFabService Object
    private static PlayFabService _instance;

    ///PlayFabServive()
    /// <summary>
    /// A constructor for PlayFabService class.
    /// </summary>
    /// Pre-Condition: None.
    /// Post-Condition: The PlayFabService object will be created
    public PlayFabService()
    {
        _instance = this;
    }


    /// <summary>
    /// Remember the user next time they log in
    /// This is used for Auto-Login purpose.
    /// </summary>
    public bool RememberMe
    {
        get
        {
            return PlayerPrefs.GetInt(_LoginRememberKey, 0) == 0 ? false : true;
        }
        set
        {
            PlayerPrefs.SetInt(_LoginRememberKey, value ? 1 : 0);
        }
    }

    /// <summary>
    /// Remember the type of authenticate for the user
    /// </summary>
    public Authtypes AuthType
    {
        get
        {
            return (Authtypes)PlayerPrefs.GetInt(_PlayFabAuthTypeKey, 0);
        }
        set
        {

            PlayerPrefs.SetInt(_PlayFabAuthTypeKey, (int)value);
        }
    }

    /// <summary>
    /// Generated Remember Me ID
    /// Pass Null for a value to have one auto-generated.
    /// </summary>
    private string RememberMeId
    {
        get
        {
            return PlayerPrefs.GetString(_PlayFabRememberMeIdKey, "");
        }
        set
        {
            var guid = string.IsNullOrEmpty(value) ? Guid.NewGuid().ToString() : value;
            PlayerPrefs.SetString(_PlayFabRememberMeIdKey, guid);
        }
    }

    ///ClearRememberMe()
    /// <summary>
    /// Delete data for RememberMe.
    /// </summary>
    /// Pre-Condition: None.
    /// Post-Condition: RememberMe data will be deleted.
    public void ClearRememberMe()
    {
        PlayerPrefs.DeleteKey(_LoginRememberKey);
        PlayerPrefs.DeleteKey(_PlayFabRememberMeIdKey);
    }

    ///Authenticate(Authtypes)
    /// <summary>
    /// Run the authentication process by specific authtype.
    /// </summary>
    /// <param name="authType"></param>
    /// Pre-Condition: authType is a valid Authtypes
    /// Post-Condition: authType will be saved and Authenticate() will be ran.
    public void Authenticate(Authtypes authType)
    {
        AuthType = authType;
        Authenticate();
    }

    ///Authenticate()
    /// <summary>
    /// Authenticate the user by the Auth Type that was defined.
    /// </summary>
    /// Precondition: None.
    /// Postcondition: Depending on a saved Authtype, a function will be called.
    public void Authenticate()
    {
        var authType = AuthType;
        Debug.Log(authType);
        switch (authType)
        {
            case Authtypes.None:
                break;

            case Authtypes.Silent:
                SilentlyAuthenticate();
                break;
            case Authtypes.EmailAndPassword:
                AuthenticateEmailPassword();
                break;
            case Authtypes.RegisterPlayFabAccount:
                AddAccountAndPassword();
                break;
        }


    }

    ///AuthenticateWebGL(string)
    /// <summary>
    /// Login with WebGL
    /// </summary>
    /// <param name="WebGL"></param>
    /// Pre-Condition: Must be WebGL platform
    /// Post-Condition: Logged in PlayFab account
    public void AuthenticateWebGL(string WebGL)
    {
        if (Application.platform == RuntimePlatform.WebGLPlayer)
            _playFabId = WebGL;
    }

    ///AuthenticateWebGL(string)
    /// <summary>
    /// Login with WebGL
    /// </summary>
    /// <param name="WebGL"></param>
    /// Pre-Condition: Must be WebGL platform
    /// Post-Condition: Logged in PlayFab account
    public void AuthenticateWebGLSession(string WebGL)
    {
        if (Application.platform == RuntimePlatform.WebGLPlayer)
            _sessionTicket = WebGL;
    }

    ///Logout()
    /// <summary>
    /// Log User off.
    /// </summary>
    /// Pre-Condition: Must be logged in.
    /// Post-Condition: Logged off.
    public void Logout()
    {
        _playFabId = "";
        _sessionTicket = "";
    }

    ///AuthenticateEmailPassword()
    /// <summary>
    /// Authenticate a user in PlayFab using an Email & Password combo.
    /// </summary>
    /// Pre-Condition: Email and password are valid.
    /// Post-Condition: Will be logged into the PlayFab account associated with the email.
    private void AuthenticateEmailPassword()
    {
        //Check if the users has opted to be remembered.
        if (RememberMe && !string.IsNullOrEmpty(RememberMeId))
        {
            //If the user is being remembered, then log them in with a customid that was 
            //generated by the RememberMeId property
            PlayFabClientAPI.LoginWithCustomID(new LoginWithCustomIDRequest()
            {
                TitleId = PlayFabSettings.TitleId,
                CustomId = RememberMeId,
                CreateAccount = true,
                InfoRequestParameters = InfoRequestParams
            }, (result) =>
            {
                //Store identity and session
                _playFabId = result.PlayFabId;
                _sessionTicket = result.SessionTicket;

                if (OnLoginSuccess != null)
                {
                    //report login result back to subscriber
                    OnLoginSuccess.Invoke(result);
                }
            }, (error) =>
            {
                if (OnPlayFabError != null)
                {
                    //report error back to subscriber
                    OnPlayFabError.Invoke(error);
                }
            });
            return;
        }
        
        //We have not opted for remember me in a previous session, so now we have to login the user with email & password.
        PlayFabClientAPI.LoginWithEmailAddress(new LoginWithEmailAddressRequest()
        {
            TitleId = PlayFabSettings.TitleId,
            Email = Email,
            Password = Password,
            InfoRequestParameters = InfoRequestParams
        }, (result) =>
        {
            //store identity and session
            _playFabId = result.PlayFabId;
            _sessionTicket = result.SessionTicket;

            //Note: At this point, they already have an account with PlayFab using a Username (email) & Password
            //If RememberMe is checked, then generate a new Guid for Login with CustomId.
            if (RememberMe)
            {
                RememberMeId = Guid.NewGuid().ToString();
                AuthType = Authtypes.EmailAndPassword;
                //Fire and forget, but link a custom ID to this PlayFab Account.
                PlayFabClientAPI.LinkCustomID(new LinkCustomIDRequest()
                {
                    CustomId = RememberMeId,
                    ForceLink = ForceLink
                }, null, null);
            }

            if (OnLoginSuccess != null)
            {
                //report login result back to subscriber
                OnLoginSuccess.Invoke(result);
            }
        }, (error) =>
        {
            if (OnPlayFabError != null)
            {
                //Report error back to subscriber
                OnPlayFabError.Invoke(error);
            }
        });
    }

    ///AddAccountAndPassword()
    /// <summary>
    /// Register a user with an Email & Password.
    /// </summary>
    /// Pre-Condition: The Email has not been used.
    /// Post-Condition: A PlayFab account will be created using Email and Password.
    private void AddAccountAndPassword()
    {
        //Any time we attempt to register a player, first silently authenticate the player.
        //This will retain the players True Origination (Android, iOS, Desktop)
        SilentlyAuthenticate((result) => {

            if (result == null)
            {
                //something went wrong with Silent Authentication, Check the debug console.
                OnPlayFabError.Invoke(new PlayFabError()
                {
                    Error = PlayFabErrorCode.UnknownError,
                    ErrorMessage = "Silent Authentication by Device failed"
                });
            }

            //Note: If silent auth is success, which is should always be and the following 
            //below code fails because of some error returned by the server ( like invalid email or bad password )
            //this is okay, because the next attempt will still use the same silent account that was already created.

            //Now add our username & password.
            PlayFabClientAPI.RegisterPlayFabUser(new RegisterPlayFabUserRequest()
            {
                TitleId = PlayFabSettings.TitleId,
                Email = Email,
                Password = Password,
                RequireBothUsernameAndEmail = false
            }, (addResult) => {
                if (OnRegisterSuccess != null)
                {
                    //Store identity and session
                    _playFabId = result.PlayFabId;
                    _sessionTicket = result.SessionTicket;

                    //If they opted to be remembered on next login.
                    if (RememberMe)
                    {
                        //Generate a new Guid 
                        RememberMeId = Guid.NewGuid().ToString();
                        //Fire and forget, but link the custom ID to this PlayFab Account.
                        PlayFabClientAPI.LinkCustomID(new LinkCustomIDRequest()
                        {
                            CustomId = RememberMeId,
                            ForceLink = ForceLink
                        }, null, null);
                    }

                    //Override the auth type to ensure next login is using this auth type.
                    AuthType = Authtypes.EmailAndPassword;

                    //Report login result back to subscriber.
                    OnRegisterSuccess.Invoke(result);
                }
            }, (error) => {
                if (OnPlayFabError != null)
                {
                    //Report error result back to subscriber
                    OnPlayFabError.Invoke(error);
                    Debug.Log("Fail to Register");
                }
            });

        });
    }

    ///SilentlyAuthicaticate(System.Action<LoginResult>)
    /// <summary> 
    ///Login with DeviceID.
    ///Depending on whether the device is linked or not to an existing account:
    ///If linked to an account, then it will log into that account.
    ///If not linked to an account, then it is up to the programmer to decide (OnLoginSuccess() function).
    /// </summary>
    /// <param name="callback"></param>
    ///Pre-Condition: None.
    ///Post-Condition: Logging into a PlayFab account that is linked to the device.
    private void SilentlyAuthenticate(System.Action<LoginResult> callback = null)
    {
#if UNITY_ANDROID && !UNITY_EDITOR

        //Get the device id from native android
        AndroidJavaClass up = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject currentActivity = up.GetStatic<AndroidJavaObject>("currentActivity");
        AndroidJavaObject contentResolver = currentActivity.Call<AndroidJavaObject>("getContentResolver");
        AndroidJavaClass secure = new AndroidJavaClass("android.provider.Settings$Secure");
        string deviceId = secure.CallStatic<string>("getString", contentResolver, "android_id");

        //Login with the android device ID
        PlayFabClientAPI.LoginWithAndroidDeviceID(new LoginWithAndroidDeviceIDRequest() {
            TitleId = PlayFabSettings.TitleId,
            AndroidDevice = SystemInfo.deviceModel,
            OS = SystemInfo.operatingSystem,
            AndroidDeviceId = deviceId,
            CreateAccount = false,
            InfoRequestParameters = InfoRequestParams
        }, (result) => {
            
            Debug.Log("Android linked device");
            //Store Identity and session
            _playFabId = result.PlayFabId;
            _sessionTicket = result.SessionTicket;

            //check if we want to get this callback directly or send to event subscribers.
            if (callback == null && OnLoginSuccess != null)
            {
                //report login result back to the subscriber
                OnLoginSuccess.Invoke(result);
            }else if (callback != null)
            {
                //report login result back to the caller
                callback.Invoke(result);
            }
        }, (error) => {

            //report errro back to the subscriber
            if(callback == null && OnPlayFabError != null){
                OnPlayFabError.Invoke(error);
            }else{
                //make sure the loop completes, callback with null
                callback.Invoke(null);
                //Output what went wrong to the console.
                Debug.LogError(error.GenerateErrorReport());
            }
        });

#elif UNITY_IPHONE || UNITY_IOS && !UNITY_EDITOR
        PlayFabClientAPI.LoginWithIOSDeviceID(new LoginWithIOSDeviceIDRequest()
            {
                TitleId = PlayFabSettings.TitleId,
                DeviceModel = SystemInfo.deviceModel,
                OS = SystemInfo.operatingSystem,
                DeviceId = SystemInfo.deviceUniqueIdentifier,
                CreateAccount = false,
                InfoRequestParameters = InfoRequestParams
            }, (result) =>
            {
                Debug.Log("IOS linked device");
                Debug.Log(SystemInfo.deviceModel);
                //Store Identity and session
                _playFabId = result.PlayFabId;
                _sessionTicket = result.SessionTicket;

                //check if we want to get this callback directly or send to event subscribers.
                if (callback == null && OnLoginSuccess != null)
                {
                    //report login result back to the subscriber
                    OnLoginSuccess.Invoke(result);
                }
                else if (callback != null)
                {
                    //report login result back to the caller
                    callback.Invoke(result);
                }
            }, (error) =>
            {
                //report errro back to the subscriber
                if (callback == null && OnPlayFabError != null)
                {
                    OnPlayFabError.Invoke(error);
                }
                else
                {
                    //make sure the loop completes, callback with null
                    callback.Invoke(null);
                    //Output what went wrong to the console.
                    Debug.LogError(error.GenerateErrorReport());
                }
            });
#else
        PlayFabClientAPI.LoginWithCustomID(new LoginWithCustomIDRequest()
        {
            TitleId = PlayFabSettings.TitleId,
            CustomId = SystemInfo.deviceUniqueIdentifier,
            CreateAccount = false,
            InfoRequestParameters = InfoRequestParams
        }, (result) => {

            Debug.Log("Custom linked device");
            //Store Identity and session
            _playFabId = result.PlayFabId;
            _sessionTicket = result.SessionTicket;

            //check if we want to get this callback directly or send to event subscribers.
            if (callback == null && OnLoginSuccess != null)
            {
                //report login result back to the subscriber
                OnLoginSuccess.Invoke(result);
            }
            else if (callback != null)
            {
                //report login result back to the caller
                callback.Invoke(result);
            }
        }, (error) => {
            //report error back to the subscriber
            if (callback == null && OnPlayFabError != null)
            {
                OnPlayFabError.Invoke(error);
            }
            else
            {
                //make sure the loop completes, callback with null
                callback.Invoke(null);
                //Output what went wrong to the console.
                Debug.LogError(error.GenerateErrorReport());
            }

        });
#endif
    }

    ///UnlinkSilentAuth()
    /// <summary>
    ///Unlink Device to an account.
    ///Warning: if not linked to account and you unlink device then the data will be lost.
    /// </summary>
    /// Pre-Condition: None.
    /// Post-Condition: The device will be unlink to the PlayFab account. If there was no linked PlayFab account then the data will be lost.
    public void UnlinkSilentAuth()
    {
        SilentlyAuthenticate((result) =>
        {
#if UNITY_ANDROID && !UNITY_EDITOR
            //Get the device id from native android
            AndroidJavaClass up = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            AndroidJavaObject currentActivity = up.GetStatic<AndroidJavaObject>("currentActivity");
            AndroidJavaObject contentResolver = currentActivity.Call<AndroidJavaObject>("getContentResolver");
            AndroidJavaClass secure = new AndroidJavaClass("android.provider.Settings$Secure");
            string deviceId = secure.CallStatic<string>("getString", contentResolver, "android_id");

            //Fire and forget, unlink this android device.
            PlayFabClientAPI.UnlinkAndroidDeviceID(new UnlinkAndroidDeviceIDRequest() {
                AndroidDeviceId = deviceId
            }, null, null);

#elif UNITY_IPHONE || UNITY_IOS && !UNITY_EDITOR
                PlayFabClientAPI.UnlinkIOSDeviceID(new UnlinkIOSDeviceIDRequest()
                {
                    DeviceId = SystemInfo.deviceUniqueIdentifier
                }, null, null);
#else
            PlayFabClientAPI.UnlinkCustomID(new UnlinkCustomIDRequest()
            {
                CustomId = SystemInfo.deviceUniqueIdentifier
            }, null, null);
#endif
        });
    }

    ///LinkDevice()
    ///<summary>
    ///Link Device to an existing account.
    ///</summary>
    ///Pre-Condition: Must be signed into a PlayFab account.
    ///Post-Condition: The Device will be linked to the PlayFab account.
    public void LinkDevice()
    {
#if UNITY_ANDROID && !UNITY_EDITOR

        //Get the device id from native android
        AndroidJavaClass up = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject currentActivity = up.GetStatic<AndroidJavaObject>("currentActivity");
        AndroidJavaObject contentResolver = currentActivity.Call<AndroidJavaObject>("getContentResolver");
        AndroidJavaClass secure = new AndroidJavaClass("android.provider.Settings$Secure");
        string deviceId = secure.CallStatic<string>("getString", contentResolver, "android_id");

        //Link android device ID with Existing PlayFabAccount
        PlayFabClientAPI.LinkAndroidDeviceID(new LoginWithAndroidDeviceIDRequest() {
            AndroidDevice = SystemInfo.deviceModel,
            OS = SystemInfo.operatingSystem,
            AndroidDeviceId = deviceId,
            ForceLink = true
        }, (result) => {
            Debug.Log("Linked with Android Device");
        }, (error) => {
            
            Debug.Log("Failed to link with Android Device");
            Debug.LogError(error.GenerateErrorReport());
            }
        });

        //PlayFab API call to link an IOS device to the PlayFab account.
#elif UNITY_IPHONE || UNITY_IOS && !UNITY_EDITOR
        PlayFabClientAPI.LinkIOSDeviceID(new LinkIOSDeviceIDRequest()
        {
            DeviceModel = SystemInfo.deviceModel,
            OS = SystemInfo.operatingSystem,
            DeviceId = SystemInfo.deviceUniqueIdentifier,
            ForceLink = true
        }, (result) =>
        {
            Debug.Log("Linked with IOS Device");

        }, (error) =>
        {
            Debug.Log("Failed to link with IOS Device");
            Debug.LogError(error.GenerateErrorReport());
        });
#else
        //PlayFab API call to link the current device used to the PlayFab account.
        PlayFabClientAPI.LinkCustomID(new LinkCustomIDRequest()
        {
            CustomId = SystemInfo.deviceUniqueIdentifier,
            ForceLink = true
        }, (result) => {
            Debug.Log("Linked with Custom Device");
        }, (error) => {
            Debug.Log("Failed to link with Custom Device");
            Debug.LogError(error.GenerateErrorReport());
        });
#endif
    }

    ///PlayerDataTypes
    /// <summary>
    /// Player Data types.
    /// </summary>
    /// Pre-Condition: None.
    /// Post-Condition: None.
    public enum PlayerDataTypes
    {
        none,
        GetData,
        ClearData
    }

    ///Data(PlayerDataTypes)
    /// <summary>
    /// Choose data process by specific datatype.
    /// </summary>
    /// <param name="dataType"></param>
    /// Precondition: dataType must be a valid dataType.
    /// Postcondition: Depending on a datatype, a function will be called.
    public void Data(PlayerDataTypes dataType)
    {
        Debug.Log(dataType);
        switch (dataType)
        {
            case PlayerDataTypes.none:
                break;
            case PlayerDataTypes.GetData:
                GetUserData();
                break;
            case PlayerDataTypes.ClearData:
                ClearUserData();
                break;
        }
    }

    ///GetUserData()
    /// <summary>
    /// Retrieves UserData from PlayFab.
    /// </summary>
    /// Pre-Condition: Must be signed into a PlayFab account.
    /// Post-Condition: The Data from the PlayFab account will be retrieved.
    public static void GetUserData()
    {
        if (_playFabId == null)
            return;
        //PlayFab API call requires a request to retrieve data.
        var GetUserDataRequest = new PlayFab.ClientModels.GetUserDataRequest(){ PlayFabId = _playFabId };
        //PlayFab API call to retrieve data from the PlayFab account.
        PlayFabClientAPI.GetUserData(GetUserDataRequest,
            (result) =>
            {
                Debug.Log(_playFabId + "GetUserDataRequest");
                foreach (var entry in result.Data)
                {
                    Debug.Log(entry.Key + ": " + entry.Value.Value);
                    //This will be used for Clear Data.
                    _Key.Add(entry.Key);
                }
                DataResult.Invoke(result);
            },
            (error) =>
            {
                Debug.Log(_playFabId);
                Debug.Log("Error: GetUserData()");
                Debug.Log(error.ErrorMessage);
            }
        );
    }


    /// UpdateUserData(Dictionary<String, String>)
    /// <summary>
    /// Updates User's Data in PlayFab.
    /// </summary>
    /// <param name="UserData"></param>
    /// Pre-Condition: Must be signed into a PlayFab account.
    /// Post-Condition: The PlayFab account is updated with UserData.
    public void UpdateUserData(Dictionary<String, String> UserData)
    {
        if (_playFabId == null)
            return;
        //PlayFab API call requires a request to update.
        var UpdateUserDataRequest = new PlayFab.ClientModels.UpdateUserDataRequest() { Data = UserData };
        //PlayFab API call to update data for the PlayFab account. 
        PlayFabClientAPI.UpdateUserData(UpdateUserDataRequest,
            (result) =>
            {
                Debug.Log("Data successfully updated.");
            },
            (error) =>
            {
                Debug.Log("Error: GetUserData()");
                Debug.Log(error.ErrorMessage);
            }
        );
    }

    ///ClearUserData()
    /// <summary>
    /// Clear all User's data in PlayFab.
    /// </summary>
    /// Pre-Condition: Must be signed into a PlayFab account.
    /// Post-Conidition: The PlayFab account's data will be cleared.
    public static void ClearUserData()
    {
        if (_playFabId == null)
            return;
        //PlayFab API call requires a request to update, but with KeysToRemove it will delete data.
        var UpdateUserDataRequest = new PlayFab.ClientModels.UpdateUserDataRequest() { KeysToRemove = _Key };
        //PlayFab API call to update data that will be removed for the PlayFab account. 
        PlayFabClientAPI.UpdateUserData(UpdateUserDataRequest,
            (result) =>
            {
                Debug.Log("Data successfully Cleared.");
            },
            (error) =>
            {
                Debug.Log("Error: ClearUserData()");
                Debug.Log(error.ErrorMessage);
            }
        );
    }
}
