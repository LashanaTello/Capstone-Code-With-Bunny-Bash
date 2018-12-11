using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

/*
 * This class allows whatever object it is attached to be dragged.
 * But, this class was made specifically to drag Command objects and keeps track of how many
 * Command objects of the same kind can be dragged.
 * This script will be attached to every Command object and every object that is necessary 
 * to create a Complex Command (e.g., a rock).
 */

public class Drag : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler {

    //  The GameObject that will be draggable.
    //  This will be a Command object.
    public static GameObject object_being_dragged_;

    //  The original position of object_being_dragged_ before the 
    //  player started dragging it.
    private Vector2 start_position_;

    //  The original parent (slot) of object_being_dragged_ before 
    //  the player started dragging it.
    private UnityEngine.Transform start_parent_;

    //  The Canvas object in the Inspector that holds Command List,
    //  Player Commands, and Command Creator.
    //  It is the space in which we will be dragging and dropping object_being_dragged_.
    private UnityEngine.Transform canvas_;

    //  The number of Command for a single Command that can be dragged. 
    //  For example, if number_of_commands_ is 3 for the Down Command, 
    //  then only 3 Down Commands can be dragged and dropped.
    [SerializeField] private int number_of_commands_ = 0;

    //  
    public void OnBeginDrag(PointerEventData eventData)
    {
        if (eventData.pointerDrag.transform.parent.tag == "Command List Slot")
        {            
            if (number_of_commands_ == 0 || number_of_commands_ == 1)
            {
                object_being_dragged_ = gameObject;
                
            } else
            {
                object_being_dragged_ = Instantiate(gameObject);
                object_being_dragged_.name = gameObject.name;
                object_being_dragged_.tag = "Destroy";  //  change tag to destroy in case player does not drop object in a slot
            }
        } else
        {
            object_being_dragged_ = gameObject;
        }
        start_position_ = transform.position;
        start_parent_ = transform.parent;
        GetComponent<CanvasGroup>().blocksRaycasts = false;
        canvas_ = GameObject.FindGameObjectWithTag("UI Canvas").transform;
        transform.SetParent(canvas_);
    }

    //  
    public void OnDrag(PointerEventData eventData)
    {
        transform.position = Input.mousePosition;
    }

    //  
    public void OnEndDrag(PointerEventData eventData)
    {
        if ((object_being_dragged_.tag == "Play Command" || object_being_dragged_.tag == "A Rock") && (number_of_commands_ != 0))
        {
            number_of_commands_--;
        }
        else if (object_being_dragged_.tag == "Destroy")
        {
            Destroy(object_being_dragged_);
        }
        object_being_dragged_ = null;

        GetComponent<CanvasGroup>().blocksRaycasts = true;
        if (transform.parent == canvas_)
        {
            transform.position = start_position_;
            transform.SetParent(start_parent_);
        }        
    }

    //  
    internal void ChangeNumberOfCommands(int value)
    {
        number_of_commands_ = value;
    }

    //  
    internal void IncreaseNumberOfCommands(int value)
    {
        number_of_commands_ += value;
    }

    //  
    internal int NumberOfCommands()
    { 
        return number_of_commands_;
    }
}
