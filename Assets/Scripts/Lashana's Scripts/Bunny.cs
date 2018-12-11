using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

/*
 * 
 */

public class Bunny : MonoBehaviour {

    //  
    public int speed_;

    //  
    public Text Win;

    //  
    private string next_command_name_;

    //  
    private string error_message_;

    //
    //tempPath_ is used when bunny's animation flipped from right to left.  
    private Vector2 path_, tempPath_;

    //  
    private GameObject Beginning_;

    //  
    private GameObject PlayerCommands_;

    //  
    private GameObject score_;

    //  
    private List<GameObject> list_of_commands_;

    //  
    private Stack<bool> execute_function_calls_;    //  will only be used to track the number of calls made to ExecuteCommands

    //  
    private bool is_bunny_moving_;

    //  
    private bool are_loop_commands_finished_;

    //  
    private bool executing_loop_;

    //  
    private bool hit_a_rock_;

    //  
    private bool is_challenge_level_;

    //  
    private bool win_;
    
    //Check if bunny's animation is facing right for Flip() function.
    public bool facingRight = true;

    //Hold x_axis value from bunny's moving vector for Flip() function.
    private float horizontal;

    //  
    private PlayFabService _PlayFabService = PlayFabService.Instance;
 //   private GameObject temp;

    //  
    private PlayerPref pf_;

    //  
    private string level_;

    // bunny's animation controller.  
    public Animator anim;


    //  Use this for initialization
    private void Start() 
    {
	    is_bunny_moving_ = false;
        are_loop_commands_finished_ = false;
        executing_loop_ = false;
        hit_a_rock_ = false;
        win_ = false;

        next_command_name_ = "";
        error_message_ = "Oops! Wrong commands!";

        if (SceneManager.GetActiveScene().name.Contains("Challenge"))
        {
            is_challenge_level_ = true;
        } else
        {
            is_challenge_level_ = false;
        }

        execute_function_calls_ = new Stack<bool>();
        list_of_commands_ = new List<GameObject>();

        Win.text = "";
        speed_ = 3;
        Beginning_ = GameObject.FindGameObjectWithTag("Respawn");
        PlayerCommands_ = GameObject.FindGameObjectWithTag("Player Commands");
        if (is_challenge_level_ == true)
        {
            score_ = GameObject.FindGameObjectWithTag("Score");
        } else
        {
            score_ = null;
        }
        
        anim = GetComponent<Animator>();
        level_ = SceneManager.GetSceneAt(SceneManager.sceneCount - 1).name;
        pf_ = new PlayerPref();
    }

    //
    private void FixedUpdate()
    {
        transform.Translate(path_ * speed_ * Time.deltaTime);
    }

    //  
    public void OnMouseDown()
    {
        //  If player entered wrong commands, the bunny will return to the beginning so player 
        //  can enter another set of commands. So the speed needs to be set back to 3 so the bunny can move again
        speed_ = 3;

        if (Win.text == "You win!")
        {
            SceneManager.UnloadSceneAsync(level_);
        }      
        
        list_of_commands_.Clear();
               
        for (int i = 0; i < PlayerCommands_.transform.childCount; i++)
        {
            UnityEngine.Transform slot = PlayerCommands_.transform.GetChild(i);
            if (slot.childCount > 0)
            {
                list_of_commands_.Add(slot.GetChild(0).gameObject);

            }
            else
            {
                //  make sure player fills all Player Command slots
                //  output error message
                if (is_challenge_level_ != true)
                {
                    string message = "Add more commands!";
                    StartCoroutine(ErrorMessage(message));
                    return;
                }
            }
        }

        if (execute_function_calls_.Count > 0)
        {
            execute_function_calls_.Clear();
        }
        
        StartCoroutine(ExecuteCommands(list_of_commands_));
    }

    //  
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Correct")
        {
            is_bunny_moving_ = false; 

        } else if (collision.gameObject.tag == "Win")
        {
            is_bunny_moving_ = false;
            speed_ = 0;
            win_ = true;
            Win.text = "You win!";

            // Play animation "eatCarrot" if bunny won. 
            anim.SetBool("isWin", true);
            GetComponent<Animator>().Play("eatCarrot");
            
            //change transiton parameters in order to play "eatCarrot" correctly. 
            anim.SetBool("hit", false);
            anim.SetBool("restart", false);

            //  Update PlayFab and SQL db
            if (is_challenge_level_ == true)
            {
                score_.GetComponent<Score>().StarScore();
                _PlayFabService.UpdateUserData(new Dictionary<string, string>() { { level_, score_.GetComponent<Score>().StarCount() + "Star" } });
                pf_.UpdateLevelScore(level_, score_.GetComponent<Score>().StarCount() + "Star");
            }
            else
            {
                _PlayFabService.UpdateUserData(new Dictionary<string, string>() { { level_, "Won" } });
                pf_.UpdateLevelScore(level_, "Won");
            }

        } else if (collision.gameObject.tag == "Rock")
        {
            hit_a_rock_ = true;

            if (next_command_name_ == "Conditional Command")
            {
                
                is_bunny_moving_ = false;
                //  When bunny hits a rock, it's not as same as hits a incorrect collision, 
                //  so animation parameter hit should be false. 
                anim.SetBool("hit", false);
                anim.SetBool("isWin", false);
            } else
            {
                anim.SetBool("hit", true);
                //StopAllCoroutines();
                ReturnToBeginning();
                is_bunny_moving_ = false;
                string message = "Use the Conditional command!";
                StartCoroutine(ErrorMessage(message));
            }

        }
    }

    //  
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Incorrect")
        {
            is_bunny_moving_ = false;
            //StopAllCoroutines();
            speed_ = 0;   // After teleportation, bunny must stop moving
            anim.SetBool("hit", true);  //bunny hit incorrect collision, set animation parameter "hit" to true. 
            anim.SetBool("isWin", false);
            //anim.SetFloat("Speed",0);
            StartCoroutine(ErrorMessage(error_message_));
        }
    }

    //  
    private IEnumerator ExecuteCommands(List<GameObject> commands)
    {
        string command_name = "";
        string previous_command_name = "";

        execute_function_calls_.Push(true);

        for (int i = 0; i < commands.Count; i++)
        {
            path_ = Vector2.zero;
            GameObject command = commands[i];

            if (i != commands.Count - 1)
            {
                next_command_name_ = commands[i + 1].name;
            }

            command_name = command.name;
            if (command_name == "Up Command")
            {
                if (previous_command_name == "Up Command" || previous_command_name == "Down Command")
                {
                    is_bunny_moving_ = false;
                    //StopAllCoroutines();
                    StartCoroutine(ErrorMessage(error_message_));
                    ReturnToBeginning();
                }
                is_bunny_moving_ = true;
                transform.eulerAngles = new Vector2(0, -180);

                // direction "0" is for moving up or down. 
                anim.SetInteger("direction", 0);
                // set "Speed" = 3 to make sure bunny is running, not change to idle. 
                anim.SetFloat("Speed", 3.0f);
                //GetComponent<Animator>().Play("up");
                path_ += Vector2.up;

            } else if (command_name == "Right Command")
            {
                if (previous_command_name == "Right Command" || previous_command_name == "Left Command")
                {
                    is_bunny_moving_ = false;
                    //StopAllCoroutines();
                    StartCoroutine(ErrorMessage(error_message_));
                    ReturnToBeginning();
                }
                is_bunny_moving_ = true;
                //transform.eulerAngles = new Vector2(0, -180);
                anim.SetInteger("direction", 1);
                anim.SetFloat("Speed", 3.0f);
                //GetComponent<Animator>().Play("run");
                path_ -= Vector2.right;

            } else if (command_name == "Down Command")
            {
                if (previous_command_name == "Down Command" || previous_command_name == "Up Command")
                {
                    //anim.SetFloat("Speed", 3);
                    is_bunny_moving_ = false;
                    //StopAllCoroutines();
                    StartCoroutine(ErrorMessage(error_message_));
                    ReturnToBeginning();
                }
                is_bunny_moving_ = true;
                transform.eulerAngles = new Vector2(0, -180);
                anim.SetInteger("direction", 0);
                anim.SetFloat("Speed", 3.0f);
                //GetComponent<Animator>().Play("up");
                path_ += Vector2.down;

            } else if (command_name == "Left Command")
            {
                if (previous_command_name == "Left Command" || previous_command_name == "Right Command")
                {
                    //anim.SetFloat("Speed", 3.0f);
                    is_bunny_moving_ = false;
                    //StopAllCoroutines();
                    StartCoroutine(ErrorMessage(error_message_));
                    ReturnToBeginning();
                }
                
                is_bunny_moving_ = true;
                transform.eulerAngles = new Vector2(0, 180);//flip bunny facing direction
                //Debug.Log(" x: " + transform.eulerAngles.x);
                //Debug.Log(" y: " + transform.eulerAngles.y);


                anim.SetInteger("direction", 2);
                anim.SetFloat("Speed", 3.0f);
                GetComponent<Animator>().Play("runLeft");
                path_ -= Vector2.left;
                //pathCopy_ = path_;
                
                Left();//Call flip function to flip bunny's animation from right to left when getting left command. 
                //facingRight = true;// reset facingRight = true after Flip().
                //path_ = pathCopy_;


            } else if (command_name == "Loop Command")
            {
                //  Wait until loop command is done being executed
                yield return StartCoroutine(ExecuteLoopCommand(command));

            } else if (command_name == "Function Command")
            {
                yield return StartCoroutine(ExecuteCommands(command.GetComponent<Command>().Commands));

            } else if (command_name == "Conditional Command")
            {
                yield return StartCoroutine(ExecuteConditionalCommand(command));
            }
            while (is_bunny_moving_ == true)
            {
                yield return null;
            }
            previous_command_name = command_name;
        }
        if (executing_loop_ == true)
        {
            are_loop_commands_finished_ = true;
        }

        execute_function_calls_.Pop();

        //  If the stack is empty, then all commands in list_of_commands_ have been executed.
        //  If the stack is empty and win == false, then the command sequence entered was incorrect 
        //  and bunny should be teleported back to the beginning of level to start over
        if (execute_function_calls_.Count == 0)
        {
            if (win_ == false)
            {
                ReturnToBeginning();
                string message = "Add more commands!";
                StartCoroutine(ErrorMessage(message));
            }
        }
    }

    //  Executes the commands that are in the loop command's List of commands
    private IEnumerator ExecuteLoopCommand(GameObject loop_command)
    {
        executing_loop_ = true;
        for (int i = 0; i < loop_command.GetComponent<LoopCommand>().LoopNumber; i++)
        {
            StartCoroutine(ExecuteCommands(loop_command.GetComponent<LoopCommand>().Commands));

            while (are_loop_commands_finished_ == false)    //  Wait for all the loop commands to be executed
            {
                yield return null;
            }

            //  Set are_loop_commands_finished to false to execute the loop commands again
            are_loop_commands_finished_ = false;
        }
        executing_loop_ = false;
    }

    //  Executes the commands that are in the conditional command's List of commands
    private IEnumerator ExecuteConditionalCommand(GameObject conditional_command)
    {
        string condition = conditional_command.GetComponent<ConditionalCommand>().Condition;
        if (condition == "A Rock")
        {
            if (hit_a_rock_ == true)
            {
                hit_a_rock_ = false;
                yield return StartCoroutine(ExecuteCommands(conditional_command.GetComponent<ConditionalCommand>().Commands));
            }
        }
    }

    //  Moves bunny back to the beginning of the level
    public void ReturnToBeginning()
    {
        speed_ = 0;
        transform.position = new Vector2(Beginning_.transform.position.x, Beginning_.transform.position.y + 1);
    }

    //Flip function to flip bunny's animation between facing left and facing right
    public void Flip()
    {
        horizontal = path_.x;   //get the value of x_axis from bunny's moving vector. 
        Debug.Log("horizontal in left command:" + horizontal);
        if (horizontal > 0 && facingRight || horizontal < 0 && !facingRight) 
        {
            facingRight = !facingRight;
            transform.Rotate(Vector2.up * 180);//flip  bunny animation by rotating 180 along y-axis. 
        }
        //Bunny's moving vector should be flipped after bunny flipped animation. 
        tempPath_ = path_;
        tempPath_.x *= -1;
        path_ = tempPath_;
        //transform.eulerAngles = new Vector2(0, 180);
    }

    //Flip function to flip bunny's animation to face left
    public void Left()
    {
        transform.Rotate(Vector2.up * 180);//flip  bunny animation by rotating 180 along y-axis. 
        //Bunny's moving vector should be flipped after bunny flipped animation. 
        tempPath_ = path_;
        tempPath_.x *= -1;
        path_ = tempPath_;
        //transform.eulerAngles = new Vector2(0, 180);
    }


    IEnumerator ErrorMessage(string message)
    {
        Win.text = message;
        yield return new WaitForSeconds(5);
        Win.text = "";
    }
}


