/* 
 * This class is used to change the size of Title Scene in order to fit the size of different devices. 
 * This script is placed on title screen. 
 */
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TitleScreenPos : MonoBehaviour {

	public Text Title;
	public Text Notification;
	

	// Use this for initialization
	void Start () {

	// detect the size of the device. 
	Debug.Log("Screen Width : " + Screen.width);
	Debug.Log("Screen Height: " + Screen.height);

     //Set the text and font on Play Screen. 
	Title.fontSize = 30;
	Title.fontStyle = FontStyle.BoldAndItalic;
	Title.text="Code with Bash the Bunny";
	//titleText.fontColor = green;
    Title.alignment = TextAnchor.MiddleCenter;
    }

}