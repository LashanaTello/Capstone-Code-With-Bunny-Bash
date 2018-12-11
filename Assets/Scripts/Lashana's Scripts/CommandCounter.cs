using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/*
 * This class is used to display the number of Commands that are held in this slot.
 * This script will be placed on all slots in Command List.
 */

public class CommandCounter : MonoBehaviour {

    //  Text object that displays the number of Commands in this slot
    public Text command_num_;

    //  Command object held in this slot
    private GameObject command_;

    //  Use this for initialization
    private void Start()
    {
        command_ = transform.GetChild(0).gameObject;
        command_num_.text = command_.GetComponent<Drag>().NumberOfCommands().ToString();
    }
	
    //  Convert integer to Text to display the correct number of Commands to player
	private void Update() {   
        if (command_ != null)
        {
            command_num_.text = command_.GetComponent<Drag>().NumberOfCommands().ToString();
        }
    }

    //  Sets command_ equal to the Command GameObject in this slot
    public void SetCommand()
    {
        if (transform.GetChild(0).gameObject != null)
        {
            command_ = transform.GetChild(0).gameObject;
        }
    }
}
