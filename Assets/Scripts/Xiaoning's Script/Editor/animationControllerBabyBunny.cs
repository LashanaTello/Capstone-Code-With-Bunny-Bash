using UnityEngine;
using UnityEditor;
using UnityEditor.Animations;
using System.Collections;

/* 
 * This class is used to play the animation of baby bunny in the play scene.  .
 * This script is placed on baby bunny in the play scene.
 */


// Create a menu item that causes a new controller and statemachine to be created.
public class animationControllerBabyBunny : MonoBehaviour
{
    [MenuItem("Animator/Create Animator Controller")]
    //[MenuItem("MyMenu/Create Controller")]
    static void CreateController()
    {
        // Creates the controller
        var controller = UnityEditor.Animations.AnimatorController.CreateAnimatorControllerAtPath("Assets/Mecanim/StateMachineTransitions.controller");

        // Add Animation Clips
        AnimationClip speaking = new AnimationClip();
        speaking.frameRate = 6;
        AssetDatabase.CreateAsset(speaking, "Assets/Animation/speaking.anim");
        AssetDatabase.SaveAssets();

        //Add parameters
        controller.AddParameter("TransitionNow", AnimatorControllerParameterType.Trigger);
        controller.AddParameter("Reset", AnimatorControllerParameterType.Trigger);
        controller.AddParameter("GotoSpeaking", AnimatorControllerParameterType.Trigger);

        // Add StateMachines
        var rootStateMachine = controller.layers[0].stateMachine;
        var stateMachineA = rootStateMachine.AddStateMachine("smA");

        // Add States
        var speakingState = stateMachineA.AddState("speakingState");

        // Add Transitions
        var exitTransitionCry = speakingState.AddExitTransition();
        exitTransitionCry.AddCondition(UnityEditor.Animations.AnimatorConditionMode.If, 0, "TransitionNow");
        exitTransitionCry.duration = 0;

        var resetTransition = rootStateMachine.AddAnyStateTransition(speakingState);//transit to destination state. 
        resetTransition.AddCondition(UnityEditor.Animations.AnimatorConditionMode.If, 0, "reset");
        resetTransition.duration = 0;

        var transitionIdle = stateMachineA.AddEntryTransition(speakingState);
        transitionIdle.AddCondition(UnityEditor.Animations.AnimatorConditionMode.If, 0, "GotoSpeaking");
      

        var exitTransitionSpeaking = speakingState.AddExitTransition();
        exitTransitionSpeaking.AddCondition(UnityEditor.Animations.AnimatorConditionMode.If, 0, "TransitionNow");
        exitTransitionSpeaking.duration = 0;

    }

}



