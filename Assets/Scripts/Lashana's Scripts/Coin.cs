using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* 
 * This class is used to destroy this coin after the bunny collides with it and
 * increase the player's score every time the bunny collides with this coin object.
 * This script is placed on every coin in the scene. 
 */

public class Coin : MonoBehaviour {

    //  The GameObject that contains a Text component, which displays the player's score
    private GameObject score_;

    //  Use this for initialization
    private void Start()
    {
        score_ = GameObject.FindGameObjectWithTag("Score");
    }

    //  This method increases the player's score every time the bunny collides with a coin and destroys the coin after
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            score_.GetComponent<Score>().IncreaseScore();
            Destroy(gameObject);
        }
    }
}
