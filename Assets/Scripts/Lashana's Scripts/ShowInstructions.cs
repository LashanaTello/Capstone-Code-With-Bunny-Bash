using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShowInstructions : MonoBehaviour {

    public RawImage video_;
	
	public void ShowVideoInstructions()
    {
        if (Application.platform != RuntimePlatform.WebGLPlayer)
        {
            video_.enabled = true;
            video_.GetComponent<PlayInstructions>().Play();
        }
    }
}
