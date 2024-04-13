using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class button : MonoBehaviour
{

    public string sceneToLoad;
    // Start is called before the first frame update
    void Start()
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

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnButtonPressed()
    {
        // Play the button animation if it's not played already
      

        // Start a coroutine to delay scene loading
        StartCoroutine(LoadSceneAfterDelay());
    }


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
