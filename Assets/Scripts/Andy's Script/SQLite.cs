#if UNITY_WEBGL && !UNITY_EDITOR

#else

using System.Collections;
using System.Collections.Generic;
using Mono.Data.Sqlite;
using System.Data;
using System;
using System.IO;
using UnityEngine;

public class SQLite
{
    private string conn, sqlQuery;
    IDbConnection dbconn;
    IDbCommand dbcmd;

    //Public constructor
    public SQLite()
    {
        //Path to SQL db
#if UNITY_IOS

        string dbName = "Unity.s3db";

        //Copied idea from https://github.com/Busta117/SQLiteUnityKit/blob/master/SqliteDatabase.cs
		string pathDB = System.IO.Path.Combine (Application.persistentDataPath, dbName);
		string sourcePath = System.IO.Path.Combine (Application.streamingAssetsPath, dbName);

        if (System.IO.File.Exists (sourcePath)) 
        {
					System.IO.File.Copy (sourcePath, pathDB, true);
												
		} 
        else 
        {
            Debug.Log ("ERROR: the file DB named " + dbName + " doesn't exist in the StreamingAssets Folder, please copy it there.");
        }
        //End of if condition.
        conn = "URI=file:" + pathDB;

#else
        conn = "URI=file:" + Application.dataPath + "/StreamingAssets/Unity.s3db";
#endif
        
        Debug.Log(conn);
        using (dbconn = new SqliteConnection(conn))
        {
            Debug.Log("coneected");
            dbconn.Open(); //Open connection to the database.
            dbcmd = dbconn.CreateCommand();
            sqlQuery = string.Format("CREATE TABLE IF NOT EXISTS Unity (Level varchar(32), Score varchar(16))");
            dbcmd.CommandText = sqlQuery;
            dbcmd.ExecuteScalar();
            dbconn.Close();
        }
        Debug.Log("end");
    }

    ///InsertLevel(string, string)
    /// <summary>
    /// Insert data
    /// </summary>
    /// <param name="level">The level</param>
    /// <param name="score">The score of that level</param>
    public void InsertLevel(string level, string score)
    {
        using (dbconn = new SqliteConnection(conn))
        {
            dbconn.Open(); //Open connection to the database.
            dbcmd = dbconn.CreateCommand();
            sqlQuery = string.Format("insert into Unity (Level, Score) values (\"{0}\",\"{1}\")", level, score);
            dbcmd.CommandText = sqlQuery;
            dbcmd.ExecuteScalar();
            dbconn.Close();
        }
    }

    ///ClearData()
    /// <summary>
    /// Deletes every record
    /// </summary>
    public void ClearData()
    {
        using (dbconn = new SqliteConnection(conn))
        {
            dbconn.Open(); //Open connection to the database.
            dbcmd = dbconn.CreateCommand();
            sqlQuery = string.Format("Delete from Unity;");// table name
            dbcmd.CommandText = sqlQuery;
            dbcmd.ExecuteScalar();
            dbconn.Close();
        }
    }

    ///UpdateScore(string, string)
    /// <summary>
    /// Update data
    /// </summary>
    /// <param name="level">The level</param>
    /// <param name="score">The score of that level</param>
    public void UpdateScore(string level, string score)
    {
        using (dbconn = new SqliteConnection(conn))
        {

            dbconn.Open(); //Open connection to the database.
            dbcmd = dbconn.CreateCommand();
            sqlQuery = string.Format("UPDATE Unity set Level=\"{0}\", Score=\"{1}\"", level, score);
            dbcmd.CommandText = sqlQuery;
            dbcmd.ExecuteScalar();
            dbconn.Close();
        }
    }


    ///GetScore(string)
    /// <summary>
    /// Retrieve the value for the level.
    /// </summary>
    /// <param name="Level">the name of a level that you want the value for</param>
    /// <returns>the value of score for level</returns>
    public string GetScore(string level)
    {
        using (dbconn = new SqliteConnection(conn))
        {
            string score = "";
            dbconn.Open(); //Open connection to the database.
            dbcmd = dbconn.CreateCommand();
            sqlQuery = "SELECT * " + "FROM Unity";// table name
            dbcmd.CommandText = sqlQuery;
            IDataReader reader = dbcmd.ExecuteReader();
            while (reader.Read())
            {
                string Level = reader.GetString(0);
                string Score = reader.GetString(1);

                if (Level == level)
                {
                    score = Score;
                    break;
                }
            }
            reader.Close();
            reader = null;
            dbcmd.Dispose();
            dbcmd = null;
            dbconn.Close();
            dbconn = null;
            return score;
        }
    }
}

#endif
