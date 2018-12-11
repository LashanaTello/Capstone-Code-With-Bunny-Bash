
/* 
 * This class is used to toggle music on title scene to play and stop .
 * This script is placed on title scene's canvas.
 */

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class AudioController: MonoBehaviour
{
    public GameObject PlayScreen;
    public GameObject TitleScreen;
    public GameObject SelectionScreen;
    public GameObject StoryMode;
    public GameObject LevelMode;
    public GameObject ChallengeMode;
    public AudioSource audio;

    //variable to check if the music is playing, 
    public bool m_Play;

    void Start()
    {
        //Fetch the AudioSource from the GameObject
        //m_MyAudioSource = GetComponent<AudioSource>();
        //Ensure the toggle is set to true for the music to play at start-up
        m_Play = true;
    }

// Set up conditons for play or stop music. 
    void Update()
    {
        if (SceneManager.sceneCount == 2 || !m_Play)
        {
            audio.Stop();
        }
        else
        if (!audio.isPlaying && m_Play)
        {
            audio.Play();
        }
    }

    void OnGUI()
    {
        //Switch this toggle to activate and deactivate the parent GameObject
        m_Play = GUI.Toggle(new Rect(10, 10, 100, 30), m_Play, "Play Music");
    }
}