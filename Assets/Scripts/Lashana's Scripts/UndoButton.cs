using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/*
 * This class is used remove Commands placed in the Command Creator and Player Commands panels and
 * to place the removed Commands back into Command List
 * This script will be attached to a button.
 */

public class UndoButton : MonoBehaviour {

    //  Array of Command GameObjects that correspond to the Commands in Command List and
    //  are placed in the same order in the array as they are in Command List.
    //  The Command GameObjects are placed in the Inspector.
    [SerializeField] private GameObject[] slot_commands_;

    //  Stores all the slots that each hold a Command object
    private GameObject command_list_;

    //  Stores all the slots that each hold a Command object that the player dragged over
    private GameObject player_commands_;

    //  Stores all the slots that each hold a Command object that the player dragged over and
    //  and will be used to create a Complex Command
    private GameObject command_creator_list_;

    //  Stores the slot that holds the Complex Command that the player wants to create
    private GameObject command_creator_icon_;

    //  The bunny
    private GameObject bunny_;

    //  These are all integers used to count the number of Commands removed from Command Creator and Player Commands
    private int up_commands_num_ = 0;
    private int right_commands_num_ = 0;
    private int down_commands_num_ = 0;
    private int left_commands_num_ = 0;
    private int loop_commands_num_ = 0;
    private int conditional_commands_num_ = 0;
    private int function_commands_num_ = 0;
    private int rock_commands_num_ = 0;

    //  Use this for initialization
    private void Start()
    {
        command_list_ = GameObject.FindGameObjectWithTag("Command List");
        player_commands_ = GameObject.FindGameObjectWithTag("Player Commands");

        //  If this object's tag is "Undo Creator", then we know Command Creator exists
        if (this.gameObject.tag == "Undo Creator")
        {
            command_creator_list_ = GameObject.FindGameObjectWithTag("Command Creator");
            command_creator_icon_ = GameObject.FindGameObjectWithTag("Command Creator Icon");
        }

        bunny_ = GameObject.FindGameObjectWithTag("Player");
    }

    //  This method removes all commands player dragged over into either the Command Creator or Player Commands and
    //  returns them to Command List.
    //  So, if there is one Up Command in Command Creator or Player Commands, one Up Command will be returned to Command List
    public void DetachChildren()
    {
        //  This script will be attached to either the undo button for Command Creator or the undo button for
        //  Player Commands. To make sure the undo button only works for one of these panels, check the tag of this
        //  gameObject (which is the undo button).
        //  Both undo buttons use mostly the same code so it made sense to use one script for both buttons
        if (this.gameObject.tag == "Undo Player Commands")
        {
            //  Destroy all of the commands player dragged over into Player Commands
            for (int i = 0; i < player_commands_.transform.childCount; i++)
            {
                UnityEngine.Transform slot = player_commands_.transform.GetChild(i);
                if (slot.childCount > 0)
                {
                    CountCommands(slot.GetChild(0).gameObject);
                    Destroy(slot.GetChild(0).gameObject);
                }
            }
        } else if (this.gameObject.tag == "Undo Creator")
        {
            //  Destroy the command player dragged over into command creator icon 
            if (command_creator_icon_ != null && command_creator_list_ != null)
            {
                //  If command creator icon's slot has children, it will always have just one child
                UnityEngine.Transform slot = command_creator_icon_.transform.GetChild(0);
                slot.GetComponent<CreatorSlot>().HideNumberPanel();   //  Hide number panel next to creator icon
                slot.GetComponent<CreatorSlot>().HideConditionPanel();  //  Hide conditional panel next to creator icon
                if (slot.childCount > 0)
                {
                    CountCommands(slot.GetChild(0).gameObject);
                    Destroy(slot.GetChild(0).gameObject);
                }

                //  Destroy all of the commands player dragged over into Command Creator list
                for (int i = 0; i < command_creator_list_.transform.childCount; i++)
                {
                    slot = command_creator_list_.transform.GetChild(i);
                    if (slot.childCount > 0)
                    {
                        CountCommands(slot.GetChild(0).gameObject);
                        Destroy(slot.GetChild(0).gameObject);
                    }
                }
            }
        }

        //  Add the correct number of Command objects back to Command List
        for (int i = 0; i < command_list_.transform.childCount; i++)
        {
            UnityEngine.Transform slot = command_list_.transform.GetChild(i);
            //  There is no Command in this slot and we need to create a Command object and add however many commands we removed
            if (slot.childCount == 0 && MakeCommand(slot_commands_[i].name)) 
            {
                GameObject command = Instantiate(slot_commands_[i]);
                command.name = slot_commands_[i].name;
                if (command.name == "Loop Command" || command.name == "Function Command" || command.name == "Conditional Command")
                {
                    command.tag = "Complex Command";
                } else
                {
                    command.tag = "Command";
                }

                SetCommandNumber(command);
                command.transform.SetParent(slot, false);
                slot.GetComponent<CommandCounter>().SetCommand();

            } else if (slot.childCount > 0) //  There is a Command in this slot and we only need to increase the number of Commands there
            {
                GameObject command = slot.GetChild(0).gameObject;
                IncreaseCommandNumber(command);
            }
        }
        bunny_.GetComponent<Bunny>().ReturnToBeginning();
        // change animation parameters in order to switch bunny's animation to "idle" when press undo button. 
        bunny_.GetComponent<Bunny>().anim.SetBool("restart", true);
        bunny_.GetComponent<Bunny>().anim.SetBool("hit",false);
        bunny_.GetComponent<Bunny>().anim.SetBool("isWin",false);
        bunny_.GetComponent<Bunny>().anim.SetFloat("Speed",0);
        

        //  Reset commands_num_ values to 0
        up_commands_num_ = 0;
        right_commands_num_ = 0;
        down_commands_num_ = 0;
        left_commands_num_ = 0;
        loop_commands_num_ = 0;
        conditional_commands_num_ = 0;
        function_commands_num_ = 0;
        rock_commands_num_ = 0;
    }

    //  Checks the name of new_command and increases the count variable corresponding to new_command based on its name
    private void CountCommands(GameObject new_command)
    {
        if (new_command.name == "Up Command")
        {
            up_commands_num_++;
        }
        else if (new_command.name == "Right Command")
        {
            right_commands_num_++;
        }
        else if (new_command.name == "Down Command")
        {
            down_commands_num_++;
        }
        else if (new_command.name == "Left Command")
        {
            left_commands_num_++;
        }
        else if (new_command.name == "Loop Command")
        {
            loop_commands_num_++;
        }
        else if (new_command.name == "Conditional Command")
        {
            conditional_commands_num_++;
        }
        else if (new_command.name == "Function Command")
        {
            function_commands_num_++;
        }
        else if (new_command.name == "Rock")
        {
            rock_commands_num_++;
        }
    }

    //  new_command is a new Command GameObject whose number_of_commands_ variable needs to changed
    //  to the number of commands we removed from Command Creator and Player Commands for new_command.
    //  new_command will then be placed in Command List.
    private void SetCommandNumber(GameObject new_command)
    {
        if (new_command.name == "Up Command")
        {
            new_command.GetComponent<Drag>().ChangeNumberOfCommands(up_commands_num_);
        }
        else if (new_command.name == "Right Command")
        {
            new_command.GetComponent<Drag>().ChangeNumberOfCommands(right_commands_num_);
        }
        else if (new_command.name == "Down Command")
        {
            new_command.GetComponent<Drag>().ChangeNumberOfCommands(down_commands_num_);
        }
        else if (new_command.name == "Left Command")
        {
            new_command.GetComponent<Drag>().ChangeNumberOfCommands(left_commands_num_);
        }
        else if (new_command.name == "Loop Command")
        {
            new_command.GetComponent<Drag>().ChangeNumberOfCommands(loop_commands_num_);
        }
        else if (new_command.name == "Conditional Command")
        {
            new_command.GetComponent<Drag>().ChangeNumberOfCommands(conditional_commands_num_);
        }
        else if (new_command.name == "Function Command")
        {
            new_command.GetComponent<Drag>().ChangeNumberOfCommands(function_commands_num_);
        }
        else if (new_command.name == "Rock")
        {
            new_command.GetComponent<Drag>().ChangeNumberOfCommands(rock_commands_num_);
        }
    }

    //  If the command we are removing from Command Creator or Player Commands already exists in Command List,
    //  we only need to increase the number of commands for that command already in Command List.
    //  We only add however many commands we removed from Command Creator or Command List.
    private void IncreaseCommandNumber(GameObject command)
    {
        if (command.name == "Up Command")
        {
            command.GetComponent<Drag>().IncreaseNumberOfCommands(up_commands_num_);
        }
        else if (command.name == "Right Command")
        {
            command.GetComponent<Drag>().IncreaseNumberOfCommands(right_commands_num_);
        }
        else if (command.name == "Down Command")
        {
            command.GetComponent<Drag>().IncreaseNumberOfCommands(down_commands_num_);
        }
        else if (command.name == "Left Command")
        {
            command.GetComponent<Drag>().IncreaseNumberOfCommands(left_commands_num_);
        }
        else if (command.name == "Loop Command")
        {
            command.GetComponent<Drag>().IncreaseNumberOfCommands(loop_commands_num_);
        }
        else if (command.name == "Conditional Command")
        {
            command.GetComponent<Drag>().IncreaseNumberOfCommands(conditional_commands_num_);
        }
        else if (command.name == "Function Command")
        {
            command.GetComponent<Drag>().IncreaseNumberOfCommands(function_commands_num_);
        }
        else if (command.name == "Rock")
        {
            command.GetComponent<Drag>().IncreaseNumberOfCommands(rock_commands_num_);
        }
    }

    //  Returns true if the corresponding number of commands for a Command 
    //  found in Command Creator or Player Commands is greater than 0.
    //  Returns false otherwise
    private bool MakeCommand(string new_command_name)
    {
        if (new_command_name == "Up Command")
        {
            if (up_commands_num_ == 0)
            {
                return false;
            } else
            {
                return true;
            }
        }
        else if (new_command_name == "Right Command")
        {
            if (right_commands_num_ == 0)
            {
                return false;
            } else
            {
                return true;
            }
        }
        else if (new_command_name == "Down Command")
        {
            if (down_commands_num_ == 0)
            {
                return false;
            } else
            {
                return true;
            }
        }
        else if (new_command_name == "Left Command")
        {
            if (left_commands_num_ == 0)
            {
                return false;
            } else
            {
                return true;
            }
        }
        else if (new_command_name == "Loop Command")
        {
            if (loop_commands_num_ == 0)
            {
                return false;
            } else
            {
                return true;
            }
        }
        else if (new_command_name == "Conditional Command")
        {
            if (conditional_commands_num_ == 0)
            {
                return false;
            } else
            {
                return true;
            }
        }
        else if (new_command_name == "Function Command")
        {
            if (function_commands_num_ == 0)
            {
                return false;
            } else
            {
                return true;
            }
        }
        else if (new_command_name == "Rock")
        {
            if (rock_commands_num_ == 0)
            {
                return false;
            } else
            {
                return true;
            }
        }
        return false;   //  new_command_name doesn't exist
    }
}
