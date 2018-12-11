using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Net;

public class Play : MonoBehaviour
{

    //Meta references to panels we need to show/hide
    public GameObject CurrentPanel;
    public GameObject TitlePanel;
    public GameObject SelectionPanel;

    //Meta fields for objects in the UI
    public Button playbutton;
    public Text notification;

    // Use this for initialization
    void Start()
    {
        CurrentPanel.SetActive(true);
        TitlePanel.SetActive(false);
        SelectionPanel.SetActive(false);
        playbutton.onClick.AddListener(ScreenSelection);
        notification.text = "";
    }


    /// ScreenSelection()
    /// <summary>
    /// Determines which Panel to display from Internet status.
    /// </summary>
    /// Pre-Condition: None.
    /// Post-Condition: Displays the Panel according to the Internet reachability.
    private void ScreenSelection()
    {
        if (Application.internetReachability != NetworkReachability.NotReachable)
        {
            CurrentPanel.SetActive(false);
            TitlePanel.SetActive(true);
        }
        else
        {
            CurrentPanel.SetActive(false);
            SelectionPanel.SetActive(true);
        }
    }
}
