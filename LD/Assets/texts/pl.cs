using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pl : MonoBehaviour
{

    public GameObject letter;
    public GameObject particle;
    // Start is called before the first frame update
    void Start()
    {
        letter.SetActive(false);
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void OnTriggerEnter(Collider other)
    {
        letter.SetActive(true);
        particle.SetActive(false);
    }
}
