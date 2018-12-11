using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/* 
 * This class is used to create a Complex Command using simple commands.
 * This script will be attached to a button the player presses when they want to create a Complex Command.
 */

public class CreateCommandButton : MonoBehaviour {

    //  The standalone slot holder of the Command Creator panel where only Complex Commands (loops, conditionals, functions) can be placed.
    //  This slot holder contains a slot that has the command we need to create.
    private GameObject command_to_create_slot_;

    //  The slot holder that contains many slots that each have a command that will be used to create a Complex Command.
    private GameObject list_of_commands_;

    //  Number that stores the number of times the player wants the commands in a loop command to be executed.
    //  This number is chosen by the player using in the Loop Command Number slot in the Loop Number Panel.
    private int loop_number_ = 0;

    //  Gameobject that is a check mark image.
    //  It is shown to the player when a command is succesfully created.
    private GameObject checkmark_;

    //  Gameobject that is an ex mark image.
    //  It is shown to the player when a command is unsuccesfully created.
    private GameObject exmark_;

    //  Boolean value that tells you whether or not the command was succesfully created.
    //  It will be true if command was successfully craeted and false if it was not
    private bool success_;

    //  Use this for initialization
	private void Start() {
        command_to_create_slot_ = GameObject.FindGameObjectWithTag("Command Creator Icon Slot");
        list_of_commands_ = GameObject.FindGameObjectWithTag("Command Creator");

        //  Find check mark and exmark in children
        foreach (Transform child in this.transform)
        {
            if (child.tag == "Check")
            {
                checkmark_ = child.gameObject;
                checkmark_.SetActive(false);
            } else if (child.tag == "Ex")
            {
                exmark_ = child.gameObject;
                exmark_.SetActive(false);
            }
        }

        success_ = true;
	}
	
    //  Creates the command in command_creator_icon_slot_ by adding the commands in list_of_commands_ to the command object's
    //  own List of commands 
	public void CreateCommand()
    {
        //  Check if command_to_create_slot_ has a command to create
        if (command_to_create_slot_.transform.childCount > 0)
        {
            //  Get command object that we need to create
            GameObject command_to_create = command_to_create_slot_.transform.GetChild(0).gameObject;

            if (command_to_create.name == "Loop Command")
            {
                //  Convert the loop number in the panel from text to a number and store that value in loop_number_
                loop_number_ = int.Parse(GameObject.FindGameObjectWithTag("Loop Number Changer").transform.GetChild(0).transform.GetChild(0).GetComponent<Text>().text);
                command_to_create.GetComponent<LoopCommand>().SetLoopNumber(loop_number_);

                //  Get all the commands entered to create command_to_create
                for (int i = 0; i < list_of_commands_.transform.childCount; i++)
                {
                    Transform slot = list_of_commands_.transform.GetChild(i);
                    if (slot.childCount > 0)
                    {
                        GameObject command = Instantiate(slot.GetChild(0).gameObject);
                        command.name = slot.GetChild(0).gameObject.name;
                        command_to_create.GetComponent<LoopCommand>().AddCommand(command);

                    } else if ((slot.childCount == 0) && (i != list_of_commands_.transform.childCount - 1))
                    {
                        //  If player puts commands in Command Creator but skips a slot, then the the command will not be created.
                        //  If player puts commands in Command Creator but leaves the last slot empty, then the command will be created.
                        success_ = false;
                        break;
                    }
                }

            } else if (command_to_create.name == "Function Command")
            {
                //  Get all the commands entered to create command_to_create
                for (int i = 0; i < list_of_commands_.transform.childCount; i++)
                {
                    Transform slot = list_of_commands_.transform.GetChild(i);
                    if (slot.childCount > 0)
                    {
                        GameObject command = Instantiate(slot.GetChild(0).gameObject);
                        command.name = slot.GetChild(0).gameObject.name;
                        command_to_create.GetComponent<Command>().AddCommand(command);

                    } else if ((slot.childCount == 0) && (i != list_of_commands_.transform.childCount - 1))
                    {
                        //  If player puts commands in Command Creator but skips a slot, then the the command will not be created.
                        //  If player puts commands in Command Creator but leaves the last slot empty, then the command will be created.
                        success_ = false;
                        break;
                    }
                }

            } else if (command_to_create.name == "Conditional Command")
            {
                GameObject condition_icon_slot = GameObject.FindGameObjectWithTag("Condition Icon Slot");
                if (condition_icon_slot.transform.childCount > 0)
                {
                    if (condition_icon_slot.transform.GetChild(0).tag != "A Rock")
                    {
                        //  Only a rock can go in the condition slot.
                        //  If a rock isn't here, then the conditional command can not be created.
                        success_ = false;

                    } else
                    {
                        command_to_create.GetComponent<ConditionalCommand>().SetConditionalDependent(condition_icon_slot.transform.GetChild(0).tag);
                    }

                    //  Get all the commands entered to create command_to_create.
                    for (int i = 0; i < list_of_commands_.transform.childCount; i++)
                    {
                        Transform slot = list_of_commands_.transform.GetChild(i);
                        if (slot.childCount > 0)
                        {
                            GameObject command = Instantiate(slot.GetChild(0).gameObject);
                            command.name = slot.GetChild(0).gameObject.name;
                            command_to_create.GetComponent<ConditionalCommand>().AddCommand(command);

                        } else if ((slot.childCount == 0) && (i == list_of_commands_.transform.childCount - 1))
                        {
                            //  If player puts commands in Command Creator but skips a slot, then the the command will not be created.
                            //  If player puts commands in Command Creator but leaves the last slot empty, then the command will be created.
                            success_ = false;
                            break;
                        }
                    }

                } else
                {
                    //  A conditional command can not be created if there is 
                    //  no object (e.g. a rock) to perform the condiiton on.
                    success_ = false;
                }
            }            

        } else
        {
            //  There is no command in the Command Creator icon slot so we can't create a command
            success_ = false;
        }

        if (success_ == true)
        {
            //  Show check mark
            StartCoroutine(DisplayCheckForShortWhile());
        } else
        {
            //  Show ex mark
            StartCoroutine(DisplayExForShortWhile());
        }
        success_ = true;    //  Change success_ back to true.
    }

    //  Show checkmark_'s image for 5 seconds
    private IEnumerator DisplayCheckForShortWhile()
    {
        checkmark_.SetActive(true);
        yield return new WaitForSecondsRealtime(5);
        checkmark_.SetActive(false);
    }

    //  Show exmark_'s image for 5 seconds
    private IEnumerator DisplayExForShortWhile()
    {
        exmark_.SetActive(true);
        yield return new WaitForSecondsRealtime(5);
        exmark_.SetActive(false);
    }
}
