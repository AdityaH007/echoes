using UnityEngine;
using UnityEngine.UI;

public class TextInputHandler : MonoBehaviour
{
    public InputField inputField;
    public GameObject[] objectsToColor;
    public Color newColor;

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Return))
        {
            string userInput = inputField.text.ToLower(); // Get the text entered by the player and convert to lowercase

            if (userInput == "end" && objectsToColor.Length >= 3)
            {
                // Change the color of the three GameObjects
                for (int i = 0; i < 3; i++)
                {
                    Renderer renderer = objectsToColor[i].GetComponent<Renderer>();
                    if (renderer != null)
                    {
                        renderer.material.color = newColor;
                    }
                }
            }
        }
    }

    
}
