using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* 
 * This class is a subclass of Command and inherits all of its methods and protected members.
 * This class contains a loop_number_ member variable which represents the number of times this LoopCommand should be executed. 
 * This script will be attached to every LoopCommand GameObject.
 */

public class LoopCommand : Command {

    //  Number of times this LoopCommand's List of command will be executed
    private int loop_number_ = 0; 

    //  Set the value of loop_number_ equal to num
    public void SetLoopNumber(int num)
    {
        loop_number_ = num;
    }

    //  Return the value of loop_number_
    public int LoopNumber
    {
        get
        {
            return loop_number_;
        }
    }
}
