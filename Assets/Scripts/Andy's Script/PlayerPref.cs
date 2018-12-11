using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerPref
{
#if UNITY_WEBGL && !UNITY_EDITOR
    ///UpdateLevelScore(string, int)
    /// <summary>
    /// Update data
    /// </summary>
    /// <param name="level">The level</param>
    /// <param name="score">The score of that level</param>
    public void UpdateLevelScore(string level, int score)
    {
        PlayerPrefs.SetInt(level, score);
    }

    ///UpdateLevelScore(string, string)
    /// <summary>
    /// Update data
    /// </summary>
    /// <param name="level">The level</param>
    /// <param name="score">The score of that level</param>
    public void UpdateLevelScore(string level, string score)
    {
        PlayerPrefs.SetString(level, score);
    }

    ///SetMaxLevel(int)
    /// <summary>
    /// Update Max level done in PlayerPrefs
    /// </summary>
    /// <param name="level">The highest level completed</param>
    public void SetMaxLevel(int level)
    {
        PlayerPrefs.SetInt("MaxLevel", level);
    }

    ///GetMaxLevel()
    /// <summary>
    /// Retrieve the highest level completed.
    /// </summary>
    /// <returns>the highest level completed</returns>
    public string GetMaxLevel()
    {
        return GetIntValue("MaxLevel");
    }

    ///ResetData()
    /// <summary>
    /// Deletes every record
    /// </summary>
    /// <param name="level">The highest level completed</param>
    public void ResetData()
    {
        PlayerPrefs.DeleteAll();
    }

    ///GetIntValue(string)
    /// <summary>
    /// Retrieve the value for the key.
    /// </summary>
    /// <param name="key">the name of a key that you want the value for</param>
    /// <returns></returns>
    public string GetIntValue(string key)
    {
        if (PlayerPrefs.HasKey(key))
            return PlayerPrefs.GetString(key);
        return "";
    }
#else
    //SQLite db
    SQLite db;

    //public constructor
    public PlayerPref()
    {
        db = new SQLite();
    }

    ///UpdateLevelScore(string, int)
    /// <summary>
    /// Update data
    /// </summary>
    /// <param name="level">The level</param>
    /// <param name="score">The score of that level</param>
    public void UpdateLevelScore(string level, int score)
    {
        string tmp = "" + score ;
        db.InsertLevel(level, tmp);
    }

    ///UpdateLevelScore(string, string)
    /// <summary>
    /// Update data
    /// </summary>
    /// <param name="level">The level</param>
    /// <param name="score">The score of that level</param>
    public void UpdateLevelScore(string level, string score)
    {
        db.InsertLevel(level, score);
    }

    ///ResetData()
    /// <summary>
    /// Deletes every record
    /// </summary>
    public void ResetData()
    {
        db.ClearData();
    }

    ///GetIntValue(string)
    /// <summary>
    /// Retrieve the value for the key.
    /// </summary>
    /// <param name="key">the name of a key that you want the value for</param>
    /// <returns>the value of score for key</returns>
    public string GetIntValue(string key)
    {
        string score = db.GetScore(key);
        return score;
    }
#endif
}
