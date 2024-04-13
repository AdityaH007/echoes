using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class panim : MonoBehaviour
{
    public GameObject trigger;
    private Animator animator;
    public string triggername;
   

    void Start()
    {
        animator = trigger.GetComponent<Animator>();
    }

    void OnTriggerEnter(Collider other)
    {
        // Check if the object entering the trigger has the specified minimum x-axis position
        
            if (animator != null)
            {
                animator.SetTrigger(triggername);
            }
        }
    }


