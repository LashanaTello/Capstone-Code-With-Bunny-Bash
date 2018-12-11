using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

/* 
 * This class allows the player to only drop Rock Commands into a panel or GameObject that this script is attached to.
 * This class is a subclass of InventorySlot and overrides InventorySlot's OnDrop method. 
 */

public class ConditionSlot : InventorySlot {

    //  This method allows only Rock Commands to be dropped into this slot
    public override void OnDrop(PointerEventData eventData)
    {
        if (!Item)
        {
            if (Drag.object_being_dragged_.tag == "Rock")
            {
                Drag.object_being_dragged_.tag = "A Rock";
                Drag.object_being_dragged_.transform.SetParent(transform, false);
            }
        }
    }
}
