using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class ButtonController : MonoBehaviour
{
    public Animator buttonAnimator; // Reference to the animator component for the button animation
    public string sceneToLoad; // Name of the scene to load

    private bool animationPlayed = false; // To ensure animation is played only once

    private void Start()
    {
        Button button = GetComponent<Button>(); // Get the Button component attached to this GameObject
        if (button != null)
        {
            // Add a listener to the button's onClick event
            button.onClick.AddListener(OnButtonPressed);
        }
        else
        {
            Debug.LogWarning("Button component not found!");
        }
    }

    // Method to be called when the button is pressed
    public void OnButtonPressed()
    {
        // Play the button animation if it's not played already
        if (!animationPlayed && buttonAnimator != null)
        {
            buttonAnimator.Play("Button1"); // Replace "Button1Animation" with the actual name of your animation
            animationPlayed = true;
        }

        // Start a coroutine to delay scene loading
        StartCoroutine(LoadSceneAfterDelay());
    }

    // Coroutine to load the scene after a delay
    private IEnumerator LoadSceneAfterDelay()
    {
        // Wait for 4 seconds
        yield return new WaitForSeconds(4);

        // Load the scene if sceneToLoad is not null or empty
        if (!string.IsNullOrEmpty(sceneToLoad))
        {
            SceneManager.LoadScene(sceneToLoad);
        }
        else
        {
            Debug.LogWarning("Scene to load is not specified!");
        }
    }
}
