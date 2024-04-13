using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class close : MonoBehaviour
{
 void Start()
    {
        // Add a click listener to the button
        Button button = GetComponent<Button>();
        button.onClick.AddListener(QuitApplication);
    }

    void QuitApplication()
    {
        // Quit the application
        Application.Quit();
    }
}
