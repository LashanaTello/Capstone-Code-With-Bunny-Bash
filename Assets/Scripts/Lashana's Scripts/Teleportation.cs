using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* 
 * This class is used to teleport the bunny back to the beginning of the level.
 * This script will be placed on all Incorrect colliders in the game.
 */

public class Teleportation : MonoBehaviour {

    //  The bunny
    private GameObject Player_;

    //  The flower that is always at the beginning of each level
    private GameObject LevelBeginning_;

	// Use this for initialization
	private void Start() {
        Player_ = GameObject.FindGameObjectWithTag("Player");
        LevelBeginning_ = GameObject.FindGameObjectWithTag("Respawn"); 
       // anim.SetBool("restart",true);
	}
    
    //  This method teleports the bunny to the beginning of the level if it collides
    //  with any GameObject this script is attached to
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag == "Player")
        {
            Player_.transform.position = new Vector2(LevelBeginning_.transform.position.x, LevelBeginning_.transform.position.y + 1);
        }
    }
}
