using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Blockappear : MonoBehaviour
{

    public GameObject block;
    // Start is called before the first frame update
    void Start()
    {
        block.SetActive(false);
        
    }

    // Update is called once per frame
    void OnTriggerEnter(Collider other)
    {
        block.SetActive(true);
        
    }
}
