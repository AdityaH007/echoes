using UnityEngine;
using UnityEngine.UI;

public class ActivateRawImage : MonoBehaviour
{
    public RawImage rawImage;
    public GameObject marker1;
    public GameObject marker2;

    private void OnTriggerEnter(Collider other)
    {
        // Check if the object entering the trigger is the player
        if (other.CompareTag("Player"))
        {
            marker1.SetActive(false);
            marker2.SetActive(true);
            // Activate the RawImage component
            if (rawImage != null)
            {
                rawImage.enabled = true;
            }
            else
            {
                Debug.LogWarning("RawImage component is not assigned!");
            }
        }
    }
}
