using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/* 
 * This class is used to increase the number of times the player wants the LoopCommand to be executed when
 * the player is creating a LoopCommand.
 * This script will be attached to the Increase Number Button (plus sign) in the Loop Number Panel.
 */

public class IncreaseNumberButton : MonoBehaviour {

    //  The GameObject with a Text component that displays the number
    private GameObject number_slot_;

    //  The integer representation of the Text number in number_slot_
    private int num_;

    //  Use this for initialization
	private void Start()
    {
        number_slot_ = GameObject.FindGameObjectWithTag("Loop Number");
        num_ = int.Parse(number_slot_.GetComponent<Text>().text);   //  convert Text to integer
    }

    //  Convert integer to Text so the correct number can be displayed
    private void Update()
    {
        //number_slot_.GetComponent<Text>().text = num_.ToString();
        num_ = int.Parse(number_slot_.GetComponent<Text>().text);   //  convert Text to integer
    }

    //  Add one to num_
    public void IncreaseNumber()
    {
        num_++;
        number_slot_.GetComponent<Text>().text = num_.ToString();
    }
}
