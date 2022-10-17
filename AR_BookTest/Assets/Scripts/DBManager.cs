using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Database;
using System;

public class DBManager : MonoBehaviour
{
    private string _databaseUrl = "https://myar-project-b6e8d-default-rtdb.asia-southeast1.firebasedatabase.app/";
    void Start()
    {
        FirebaseApp.DefaultInstance.Options.DatabaseUrl = new Uri(_databaseUrl);
    }
}
