using UnityEngine;
using UnityEditor;
using UnityEditor.Animations;
using System.Collections;

/* 
 * This class is used to play the animation of mom bunny in the play scene.  .
 * This script is placed on mom bunny in the play scene.
 */


// Create a menu item that causes a new controller and statemachine to be created.
public class animationControllerMomBunny : MonoBehaviour
{
    [MenuItem("Animator/Create Animator Controller")]
    //[MenuItem("MyMenu/Create Controller")]
    static void CreateController()
    {
        // Creates the controller
        var controller = UnityEditor.Animations.AnimatorController.CreateAnimatorControllerAtPath("Assets/Mecanim/StateMachineTransitions.controller");

        // Add Animation Clips

        AnimationClip BigBushJumping = new AnimationClip();
        BigBushJumping.frameRate = 2;
        AssetDatabase.CreateAsset(BigBushJumping, "Assets/Animation/BigBushJumping.anim");
        AssetDatabase.SaveAssets();

        //Add parameters
        controller.AddParameter("TransitionNow", AnimatorControllerParameterType.Trigger);
        controller.AddParameter("Reset", AnimatorControllerParameterType.Trigger);
        controller.AddParameter("GotoJumping", AnimatorControllerParameterType.Trigger);

        // Add StateMachines
        var rootStateMachine = controller.layers[0].stateMachine;
        var stateMachineA = rootStateMachine.AddStateMachine("smA");

        // Add States
        var jumpingState = stateMachineA.AddState("jumpingState");
     // don’t add an entry transition, should entry to state by default

        // Add Transitions
        var exitTransitionCry = jumpingState.AddExitTransition();
        exitTransitionCry.AddCondition(UnityEditor.Animations.AnimatorConditionMode.If, 0, "TransitionNow");
        exitTransitionCry.duration = 0;

        var resetTransition = rootStateMachine.AddAnyStateTransition(jumpingState);//transit to destination state. 
        resetTransition.AddCondition(UnityEditor.Animations.AnimatorConditionMode.If, 0, "reset");
        resetTransition.duration = 0;

        var transitionJump = stateMachineA.AddEntryTransition(jumpingState);
        transitionJump.AddCondition(UnityEditor.Animations.AnimatorConditionMode.If, 0, "GotoJumping");
      

        var exitTransitionJumping = jumpingState.AddExitTransition();
        exitTransitionJumping.AddCondition(UnityEditor.Animations.AnimatorConditionMode.If, 0, "TransitionNow");
        exitTransitionJumping.duration = 0;
    }

}



