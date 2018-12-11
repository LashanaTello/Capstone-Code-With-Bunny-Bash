using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* 
 * This class is the base class for Complex Commands that need to be created according to the player's desires.
 * This class is the bare bones of Complex Commands and will be inherited by LoopCommand and ConditionalCommand
 */

public class Command : MonoBehaviour {

    //  List of commands that will be executed when executing this Command object
    protected List<GameObject> commands_;

    //  Use this for initialization
    private void Start()
    {
        commands_ = new List<GameObject>();
    }

    //  Returns this Command object's list of commands to execute
    public List<GameObject> Commands
    {
        get
        {
            return commands_;
        }
    }

    //  Add a command to this Command object's list of commands
    public void AddCommand(GameObject command)
    {
        commands_.Add(command);
    }

    //  Remove all commands in this Command object's list of commands
    public void Clear()
    {
        commands_.Clear();
    }
}
