using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/* 
 * This class is used to decrease the number of times the player wants the LoopCommand to be executed when
 * the player is creating a LoopCommand.
 * This script will be attached to the Decrease Number Button (minus sign) in the Loop Number Panel.
 */

public class DecreaseNumberButton : MonoBehaviour {

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

    //  Subtract one from num_
    public void DecreaseNumber()
    {
        if (num_ > 0)   //  num_ can't be less than 0
        {
            num_ = num_ - 1;
            number_slot_.GetComponent<Text>().text = num_.ToString();
        }

    }
}
