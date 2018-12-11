using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class CreditReturn : MonoBehaviour {

    //Meta fields for objects in the UI
    public Button BackButton;

    // Use this for initialization
    void Start () {
        //Back Button
        BackButton.gameObject.SetActive(true);
        BackButton.onClick.AddListener(GoToMainMenu);
    }

    ///GoToMainMenu()
    /// <summary>
    /// Go to the scene with credit.
    /// </summary>
    /// Pre-Condition: None.
    /// Post-Condition: Loaded scene with credit.
    private void GoToMainMenu()
    {
        SceneManager.UnloadSceneAsync("Credits");
    }
}
