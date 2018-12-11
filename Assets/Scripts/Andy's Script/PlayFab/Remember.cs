
/* 
 * The following code is modifed from PlayFab/PlayFab-Sample https://github.com/PlayFab/PlayFab-Samples, 
 * which is licensed under the Apache License 2.0.
 * This code therefore is also licensed under the terms 
 * of the Apache License, verison 2.
 * 
 * The Original C sharp file can be found at https://github.com/PlayFab/PlayFab-Samples/blob/master/VideoTutorialSamples/PlayFabAuthentication/Assets/PlayFabUI/Demo/Scripts/LoggedInWindowView.cs
 */

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Remember : MonoBehaviour {

    public Toggle RememberMe;
    
    private PlayFabService _PlayFabService = PlayFabService.Instance;

    // Use this for initialization
    void OnEnable()
    {
        RememberMe.isOn = _PlayFabService.RememberMe;
        RememberMe.onValueChanged.AddListener(OnRememberMeChanged);
    }

    private void OnDisable()
    {
        RememberMe.onValueChanged.RemoveListener(OnRememberMeChanged);
    }

    private void OnRememberMeChanged(bool toggle)
    {
        _PlayFabService.RememberMe = toggle;
    }
}
