using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class TriggerObject : MonoBehaviour
{
    public GameObject inputField;
    public GameObject pic;
    public GameObject[] objectsToChangeMaterial;
    public Material newMaterial;
    private bool inputEnabled = true;

    public AudioSource audioSource;

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player") && inputEnabled)
        {
            inputField.SetActive(true); // Activate the input text field
        }
    }

    public void CheckInput(string inputText)
    {
        if (inputEnabled)
        {
            if (inputText.ToLower() == "end")
            {
                StartCoroutine(MaterialChangeCoroutine());
                audioSource.Play();
                pic.SetActive(true);
            }

            // Disable the input field until triggered again
            inputField.SetActive(false);
            inputEnabled = false;
        }
    }

    IEnumerator MaterialChangeCoroutine()
    {
        foreach (GameObject obj in objectsToChangeMaterial)
        {
            Renderer renderer = obj.GetComponent<Renderer>();
            if (renderer != null)
            {
                // Apply new material
                renderer.material = newMaterial;
            }
            yield return new WaitForSeconds(1f); // Delay between material changes
        }
    }
}
