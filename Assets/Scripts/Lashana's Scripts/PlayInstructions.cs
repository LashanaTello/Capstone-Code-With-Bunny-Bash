using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;
using UnityEngine.EventSystems;

public class PlayInstructions : MonoBehaviour, IPointerDownHandler {

    public RawImage raw_image_;
    public VideoPlayer video_player_;
    public Text instruction_;

    void Awake()
    {
        if (Application.platform != RuntimePlatform.WebGLPlayer)
        {
            video_player_.Prepare();
        }
    }

	// Use this for initialization
	void Start() {
        if (Application.platform != RuntimePlatform.WebGLPlayer)
        {
            instruction_.text = "Click the video when you're finished!";
            instruction_.enabled = false;
            StartCoroutine(PlayVideo());
        }
	}
	
	IEnumerator PlayVideo()
    {
        while (!video_player_.isPrepared)
        {
            yield return new WaitForSeconds(1);
            break;
        }

        raw_image_.texture = video_player_.texture;
        video_player_.Play();
        yield return new WaitForSecondsRealtime(10);
        StartCoroutine(ChangeText());
    }
  
    public void OnPointerDown(PointerEventData eventData)
    {
        StopAllCoroutines();
        raw_image_.enabled = false;
    }

    public void Play()
    {
        video_player_.Prepare();
        StartCoroutine(PlayVideo());
    }

    private IEnumerator ChangeText()
    {
        instruction_.enabled = true;
        yield return new WaitForSecondsRealtime(4);
        instruction_.enabled = false;
    }
}
