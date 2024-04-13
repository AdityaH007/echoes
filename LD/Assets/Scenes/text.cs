using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class text : MonoBehaviour
{public Button yourButton;
    public GameObject texto;

    void Start()
    {
        // Add a click listener to the button
        yourButton.onClick.AddListener(OnButtonClick);
    }

    void OnButtonClick()
    {
        // Toggle the visibility of the texto GameObject
       
        
        // If the texto GameObject is active after toggling, deactivate it
        if (texto.activeSelf)
        {
            texto.SetActive(false);
        }
        else{
            texto.SetActive(true);
        }
    }
}
