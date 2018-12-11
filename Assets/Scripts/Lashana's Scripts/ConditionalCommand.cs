using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* 
 * This class is a subclass of Command and inherits all of its methods and protected members.
 * This class contains a conditional_dependent_ member variable which is a string that is equal to 
 * the name of the object that represents the condition. 
 * So, if the bunny collides with an object whose tag is equal to the conditional_dependent_,
 * then ConditionalCommand's List of commands will then be executed.
 * This script will be attached to every ConditionalCommand GameObject.
 */

public class ConditionalCommand : Command {

    //  The string value that is equal to the name of the GameObject that represents the condition
    private string conditional_dependent_;
    
    //  Returns the value of conditional_dependent_
    public string Condition
    {
        get
        {
            return conditional_dependent_;
        }
    }

    //  Sets conditional_dependent_'s value equal to dependent
    public void SetConditionalDependent(string dependent)
    {
        conditional_dependent_ = dependent;
    }
}
