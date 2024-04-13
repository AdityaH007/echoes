using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class another : MonoBehaviour
{
    private string input;
    public TriggerObject triggerObject;

    public void ReadStringInput(string s)
    {
        input = s;
        Debug.Log(input);
        if (input.ToLower() == "end")
        {
            triggerObject.CheckInput(input);
        }
    }
}