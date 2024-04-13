using UnityEngine;

public class Staircall : MonoBehaviour
{
    public GameObject Stair;
    public AudioSource sound;

    void Start()
    {
        Stair.SetActive(false);
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            Stair.SetActive(true);
            sound.Play();
        }
    }
}
