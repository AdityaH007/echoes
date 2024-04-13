using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class maeker : MonoBehaviour
{

    public GameObject current;
    public GameObject next;
    // Start is called before the first frame update
    void Start()
    {
        next.SetActive(false);
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerEnter(Collider other)
    {
        current.SetActive(false);
        next.SetActive(true);
    }
}
