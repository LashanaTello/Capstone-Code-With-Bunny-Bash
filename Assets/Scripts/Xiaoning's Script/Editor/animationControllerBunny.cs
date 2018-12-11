using UnityEngine;
using UnityEditor;
using UnityEditor.Animations;
using UnityEngine.Playables;
using System.Collections;

/* 
 * This class is used to create and control bunny's animation states,parameters and transitions. 
 *
 * Bunny has 6 animation states:Idle,Run,Cry,Up,EatCarrot,RunLeft. Idle states is the default start state. 
 * "Run" is for running right, "RunLeft" is for running left. Because we only have bunny's sprite sheet of facing one 
 * direction, running left/right is executed by flipping. 
 * And also because we don't have bunny's front image, "Up" is for both running up and running down.
 * "EatCarrot" would be played when bunny wins. "Cry" would be played when bunny hit collisions. 
 *
 * The transitions condition parameters are controlled by scripts.These parameters would be reset in other 
 * classes such as "Bunny.cs" or "UndoButton.cs". The transition time parameters such as exit time, transition duration time 
 * are controlled in inspector. 
 * 
 * This script is placed on bunny of every level. 
 */

// Create a menu item that causes a new controller and statemachine to be created.
public class animationControllerBunny : MonoBehaviour
{
    
    [MenuItem("Animator/Create Animator Controller")]
    //[MenuItem("MyMenu/Create Controller")]
    static void CreateController()
    {
        // Creates the controller
        var controller = UnityEditor.Animations.AnimatorController.CreateAnimatorControllerAtPath("Assets/Mecanim/StateMachineTransitions.controller");

        // Add Animation Clips
        AnimationClip idle = new AnimationClip();
        idle.frameRate = 2;
        AssetDatabase.CreateAsset(idle, "Assets/Animation/idle.anim");
        AssetDatabase.SaveAssets();

        AnimationClip up = new AnimationClip();
        up.frameRate = 2;
        AssetDatabase.CreateAsset(up, "Assets/Animation/up.anim");
        AssetDatabase.SaveAssets();

        AnimationClip run = new AnimationClip();
        run.frameRate = 6;
        AssetDatabase.CreateAsset(run, "Assets/Animation/run.anim");
        AssetDatabase.SaveAssets();

        AnimationClip runLeft = new AnimationClip();
        run.frameRate = 6;
        AssetDatabase.CreateAsset(run, "Assets/Animation/runLeft.anim");
        AssetDatabase.SaveAssets();

        AnimationClip eatCarrot = new AnimationClip();
        eatCarrot.frameRate = 2;
        AssetDatabase.CreateAsset(eatCarrot, "Assets/Animation/eatCarrot.anim");
        AssetDatabase.SaveAssets();

        AnimationClip cry = new AnimationClip();
        cry.frameRate = 2;
        AssetDatabase.CreateAsset(cry, "Assets/Animation/cry.anim");
        AssetDatabase.SaveAssets();

        AnimationClip speaking = new AnimationClip();
        cry.frameRate = 6;
        AssetDatabase.CreateAsset(speaking, "Assets/Animation/speaking.anim");
        AssetDatabase.SaveAssets();

        AnimationClip proning = new AnimationClip();
        proning.frameRate = 2;
        AssetDatabase.CreateAsset(proning, "Assets/Animation/proning.anim");
        AssetDatabase.SaveAssets();

        AnimationClip confustion= new AnimationClip();
        confustion.frameRate = 2;
        AssetDatabase.CreateAsset(confustion, "Assets/Animation/proning.anim");
        AssetDatabase.SaveAssets();


        // Add parameters
        controller.AddParameter("Speed", AnimatorControllerParameterType.Float);
        controller.AddParameter("direction", AnimatorControllerParameterType.Int);
        controller.AddParameter("isWin", AnimatorControllerParameterType.Bool);
        controller.AddParameter("hit", AnimatorControllerParameterType.Bool);
        controller.AddParameter("restart", AnimatorControllerParameterType.Bool);

        controller.AddParameter("TransitionNow", AnimatorControllerParameterType.Trigger);
        controller.AddParameter("Reset", AnimatorControllerParameterType.Trigger);
        controller.AddParameter("GotoIdle", AnimatorControllerParameterType.Trigger);

        // Add StateMachines
        var rootStateMachine = controller.layers[0].stateMachine;
        var stateMachineA = rootStateMachine.AddStateMachine("smA");
    }    
    
    enum bunnyState{Idle,Run,Cry,Up,EatCarrot,RunLeft};
    private bunnyState myBunnyState;

    //Initialize the animation parameters. 
    public float Speed = 0;
    public int direction = 0;
    public bool hit = false,isWin = false,restart = false;

    //create the animation controller on bunny.
    public Animator animator;
    private GameObject _bunny;  

    void Start()
    {
        // setup default state of Idle to start in
        //transform.eulerAngles = new Vector2(0, -180);
        myBunnyState = bunnyState.Idle; 
    }

    void Update(){
        //Debug.Log("Bunny State is: " + myBunnyState);
        //Set up the animation transition conditions. 
        switch (myBunnyState)
        {
            //set up transitions from idle states to other states. 
            case bunnyState.Idle:
            if (Speed > 0.1f && direction == 0)
            _bunny.GetComponent<Animation>().Play("Up");
            else if (Speed > 0.1f && direction == 1)
            _bunny.GetComponent<Animation>().Play("Run");
            else if (hit == true)
            _bunny.GetComponent<Animation>().Play("Cry");
            else if (isWin == true)
            _bunny.GetComponent<Animation>().Play("Eatcarrot");
            else if (Speed > 0.1f && direction == 2)
            _bunny.GetComponent<Animation>().Play("runLeft");
            break;
            
            //set up transitions from run states to other states. 
            case bunnyState.Run:
            if (Speed < 0.1f && direction == 1)
            _bunny.GetComponent<Animation>().Play("Idle");
            else if (Speed > 0.1f && direction == 0)
            _bunny.GetComponent<Animation>().Play("Up");
            break;
            
            //set up transitions from up states to other states. 
            case bunnyState.Up:
            if (Speed > 0.1f && direction == 1)
            _bunny.GetComponent<Animation>().Play("Run");
            if (Speed < 0.1f && direction == 0)
            _bunny.GetComponent<Animation>().Play("Idle");
            else if (Speed > 0.1f && direction == 2)
            _bunny.GetComponent<Animation>().Play("runLeft");
            break;

            //set up transitions from runleft states to other states. 
            case bunnyState.RunLeft:
            if(Speed < 0.1f && direction ==2)
            _bunny.GetComponent<Animation>().Play("Idle");
            else if(Speed > 0.1f && direction == 0)
            _bunny.GetComponent<Animation>().Play("Up");
            break;
            
           //set up transitions from cry states back to idle states. 
           case bunnyState.Cry:
           if (restart)
           _bunny.GetComponent<Animation>().Play("Idle");
           break;

           //set up transitions from eatcarrot states to idle states. 
           case bunnyState.EatCarrot:
           if (restart)
           _bunny.GetComponent<Animation>().Play("Idle");
           break;

           
        }
    }
    
}



