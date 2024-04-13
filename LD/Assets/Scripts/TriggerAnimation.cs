using UnityEngine;

public class TriggerAnimation : MonoBehaviour
{
    public GameObject targetObject; // The game object on which the animation will be played
    public string animationName = "door"; // The name of the animation to be played

    private Animator targetAnimator; // Reference to the Animator component of the target object
    private bool hasPlayed; // To ensure the animation only plays once

    void Start()
    {
        // Get the Animator component of the target object
        targetAnimator = targetObject.GetComponent<Animator>();
        if (targetAnimator == null)
        {
            Debug.LogError("Target object does not have an Animator component!");
        }
    }

    void OnTriggerEnter(Collider other)
    {
        // Check if the object entering the trigger is the player
        if (other.CompareTag("Player") && !hasPlayed)
        {
            // Play the specified animation on the target object
            if (targetAnimator != null)
            {
                targetAnimator.Play(animationName);
                hasPlayed = true; // Set to true to prevent the animation from playing multiple times
            }
            else
            {
                Debug.LogWarning("Target Animator component is not assigned!");
            }
        }
    }
}
