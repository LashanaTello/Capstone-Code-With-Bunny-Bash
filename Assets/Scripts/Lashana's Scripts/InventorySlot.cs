using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

/* 
 * This class allows the player to drop simple commands into a panel or GameObject that this script is attached to.
 * This class is a parent class to CreatorSlot and ConditionSlott and has a virtual method (OnDrop) that its
 * subclasses can override. 
 */

public class InventorySlot : MonoBehaviour, IDropHandler
{
    //  Returns the GameObject that is being held in this slot.
    //  In other words, it returns the child GameObject of this slot.
    public GameObject Item
    {       
        get
        {
            if (transform.childCount > 0)
            {
                return transform.GetChild(0).gameObject;
            }
            return null;
        }
        
    }

    //  This method allows a command to be dropped into this slot, which would make this slot that command's parent.
    //  It also changes the command's tag to "Play Command"
    public virtual void OnDrop(PointerEventData eventData)
    {
        if (!Item)
        {
            /**************************************
            //problem is that loop command gets stuck in one slot after 2 drag n drops. one into command creator an dthen into inventory slot
            ****/

            //  Make sure player can not drop commands back into Command List.
            //  Make sure Rock GameObjects can not be dropped into this slot.
            if (this.tag != "Command List Slot" && Drag.object_being_dragged_.tag != "Rock")
            {
                Drag.object_being_dragged_.transform.SetParent(transform, false);
                //  don't change tag ...im not sure why i want this rn
                //if ((this.tag != "Command Creator Slot") && (Drag.object_being_dragged_.name != "Loop Command"))
                Drag.object_being_dragged_.tag = "Play Command";
            }
        }
        
    }
}