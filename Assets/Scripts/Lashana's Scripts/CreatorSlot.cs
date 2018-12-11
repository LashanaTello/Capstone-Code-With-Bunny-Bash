using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

/* 
 * This class allows the player to drop Complex Commands into a panel or GameObject that this script is attached to.
 * It also enables/shows or disables/hides the panels that are needed to create a Complex Command.
 * This class is a subclass of InventorySlot and overrides InventorySlot's OnDrop method. 
 */

public class CreatorSlot : InventorySlot {

    //  The loop number panel in the scene that the player uses to set the number of times they'd like the loop to be executed
    private GameObject number_panel_;

    //  The yellow panel that only accepts miscellaneous object icons (e.g., a rock) that will be used to create the Conditional Command
    private GameObject condition_icon_;

    // Use this for initialization
    void Start() {
        number_panel_ = GameObject.FindGameObjectWithTag("Loop Number Changer");
        //  If the GameObject is found in scene, disable it
        if (number_panel_ != null)
        {
            number_panel_.SetActive(false);
        }

        condition_icon_ = GameObject.FindGameObjectWithTag("Condition Icon");
        if (condition_icon_ != null)
        {
            condition_icon_.SetActive(false);
        }
    }

    //  This method allows only Complex Commands to be dropped into this slot.
    //  It also changes the command's tag to "Play Command".
    public override void OnDrop(PointerEventData eventData)
    {
        if (!Item)
        {
            if (Drag.object_being_dragged_.name == "Loop Command" || Drag.object_being_dragged_.name == "Conditional Command" ||
                Drag.object_being_dragged_.name == "Function Command")
            {
                if (Drag.object_being_dragged_.name == "Loop Command")
                {
                    number_panel_.SetActive(true);  //  Enable/show number_panel_ because player needs it to create Loop Command

                    if (condition_icon_ != null)
                    {
                        if (condition_icon_.activeSelf)
                        {
                            condition_icon_.SetActive(false);   //  Disable/hide condition_icon_ if it's showing
                        }
                    }

                } else if (Drag.object_being_dragged_.name == "Conditional Command")
                {
                    condition_icon_.SetActive(true);    //  Enable/show condition_icon_ because player needs it to create Conditional Command

                    if (number_panel_ != null)
                    {
                        if (number_panel_.activeSelf)
                        {
                            number_panel_.SetActive(false); //  Disable/hide number_panel_ if it's showing
                        }
                    }

                } else if (Drag.object_being_dragged_.name == "Function Command")
                {
                    //  Disable/hide number_panel_ and/or condition_icon_ because player doesn't need it for a Function Command
                    if (condition_icon_ != null)
                    {
                        if (condition_icon_.activeSelf)
                        {
                            condition_icon_.SetActive(false);
                        }
                    }

                    if (number_panel_ != null)
                    {
                        if (number_panel_.activeSelf)
                        {
                            number_panel_.SetActive(false);
                        }
                    }
                }
                Drag.object_being_dragged_.transform.SetParent(transform, false);
                Drag.object_being_dragged_.tag = "Play Command";
            }
        }

    }

    //  Disables/hides number_panel_
    public void HideNumberPanel()
    {
        if (number_panel_ != null)
        {
            number_panel_.SetActive(false);
        }
    }

    //  Disables/hides condition_icon_
    public void HideConditionPanel()
    {
        if (condition_icon_ != null)
        {
            condition_icon_.SetActive(false);
        }
    }
}
