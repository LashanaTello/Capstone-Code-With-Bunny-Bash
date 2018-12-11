using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/* This class keeps track of the player's score in Challenge Levels and gives the player a star rating based
 * on how many coins the player collected.
 * This script will be attached the GameObject that has a Text component that displays the player's score. 
 */

public class Score : MonoBehaviour {

    //  Text object that displays player's score on screen
    private Text score_;

    //  Integer that keeps track of the score
    private int score_num_ = 0;

    //  Integer that stores number of stars player earned
    private int stars_num_ = 0;

    //  GameObject that is the parent of all coins in the scene.
    //  A container for all coins in the scene.
    private GameObject coins_;

    //  Panel that displays how many stars player earned after beating level.
    //  3 stars == all coins collected in scene
    //  2 stars == <5 coins that player didn't collect in scene
    //  1 star == >=5 coins that player didn't collect in scene
    private GameObject star_panel_;

    //  Use this for initialization
	void Start() {
        score_ = this.GetComponent<Text>();
        score_num_ = int.Parse(score_.text);    //  Convert Text to integer
        coins_ = GameObject.FindGameObjectWithTag("Coin Container");
        star_panel_ = GameObject.FindGameObjectWithTag("Star Panel");
        star_panel_.SetActive(false);   //  Hide star panel; only show after player beats level
	}
	
    //  Convert the integer score to Text so it can be displayed on the screen
	void Update() {
        score_.text = score_num_.ToString();
	}

    //  Add 20 to player's score
    public void IncreaseScore()
    {
        score_num_ += 20;
    }

    //  Returns player's score
    public int GetScore
    {
        get
        {
            return score_num_;
        }
    }

    //  Determines player's score and displays the correct number of stars according to the player's score
    public void StarScore()
    {
        if (coins_.transform.childCount == 0)
        {
            //  Score is 3 stars since coins_ has no coins inside it.
            //  In other words, coins_ has no children.
            stars_num_ = 3;
        } else if (coins_.transform.childCount < 5)
        {
            //  Score is 2 stars
            stars_num_ = 2;
        } else
        {
            //  Score is 1 star
            stars_num_ = 1;
        }

        star_panel_.SetActive(true);    //  Show stars

        //  Show the correct number of stars
        for (int i = 0; i < 3 - stars_num_; i++)
        {
            foreach (Transform star in star_panel_.transform)
            {
                if (star.gameObject.activeSelf == true)
                {
                    star.gameObject.SetActive(false);
                    break;
                }
            }
        }
    }

    //  Returns the number of stars player earned
    public int StarCount()
    {
        return stars_num_;
    }
}
