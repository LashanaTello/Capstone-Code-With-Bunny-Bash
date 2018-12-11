/* 
 * This class is used to change the size of Play Scene in order to fit the size of different devices. 
 * This script is placed on play screen. 
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayScreenPos : MonoBehaviour {

	public Text Title;
	public GameObject MotherBunnyBash;
	public GameObject BabyBunny;
	public GameObject PlayCarrot;
	public Text Notification;
	public static int width;
	public static int height;
	//private Vector2 BabyBunnyPosition;
	//private Vector2 MotherBunnyPostion;
    private float xPos, yPos;

	// Use this for initialization
	void Start () {

    // detect the size of the device. 
	Debug.Log("Screen Width : " + Screen.width);
	Debug.Log("Screen Height: " + Screen.height);

	//Changing Baby Bunny Position to match the carrot in different size of screen
	//Get y position from Carrot position
	yPos = PlayCarrot.transform.position.y;
	xPos = PlayCarrot.transform.position.x;
	Debug.Log("carrot x position: " + xPos);
	Debug.Log("carrot y position: "+ yPos);

	//Move Bunny Closer to the Carrot and further away from the edge of the screen
	//Calculate x position which is the middle from the edge of the screen and the carrot
	float BabyXPos = xPos/3f;
    BabyBunny.transform.position = new Vector2(BabyXPos, yPos);
 
	//Changing Mother Bunny Position to match the carrot
	//Calculate x position which is the middle from the edge of the screen and the carrot
	float MomXPos = xPos*1.7f;
	
	//Move Bunny Closer to the Carrot and further away from the edge of the screen
    MotherBunnyBash.transform.position = new Vector2(MomXPos, yPos);

    //Set the text and font on Play Screen. 
	Title.fontSize = 24;
	Title.fontStyle = FontStyle.BoldAndItalic;
	Title.text="Code with Bash the Bunny";
	//titleText.fontColor = green;
    Title.alignment = TextAnchor.MiddleCenter;
    }

}


