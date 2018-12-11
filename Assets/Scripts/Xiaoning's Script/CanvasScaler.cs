
/* 
 * This class is used to Scale the Canvas of each scene in order to fit the size of different devices. 
 * This script is placed on each level. 
 */

using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class CanvasScaler : MonoBehaviour{
	public Vector2 referenceResolution;
	public float matchWidthOrHeight=0.5f;
	public float referencePixelsPerUnit=100.0f;
	public CanvasScaler myCanvasScaler;
	enum ScreenMatchMode{MatchWidthOrHeight,Expand,Shrink};
	bool autorotateToLandscapeLeft;
	
	// the start set up.
	void Start(){
		ScreenMatchMode myMode;
		myMode = ScreenMatchMode.MatchWidthOrHeight;
		//CanvasScaler myCanvasScaler = GameObject.Find("Canvas").gameObject.GetComponent<CanvasScaler>();
		//myCanvasScaler.referenceResolution = new Vector2 (860,640);
		//start in Landscape mode. 
		Screen.orientation = ScreenOrientation.LandscapeLeft;
	}
	
	// Controll the game to be played on landscape model on different devices. 
	void Update(){
		if(!autorotateToLandscapeLeft)
		Screen.orientation = ScreenOrientation.LandscapeLeft;
	}
}
