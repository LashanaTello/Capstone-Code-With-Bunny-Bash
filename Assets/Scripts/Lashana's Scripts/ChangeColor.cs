using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeColor : MonoBehaviour {

    private Color start_, flash_;

	// Use this for initialization
	void Start () {
        start_ = this.gameObject.GetComponent<Material>().color;
        flash_ = Color.red;
        //gameObject.SetActive(false);
	}
	
	// Update is called once per frame
	void Update () {
        StartCoroutine(Blink());
	}

    void Show()
    {
        gameObject.SetActive(true);
    }

    void Hide()
    {
        gameObject.SetActive(false);
    }

    IEnumerator Blink()
    {
        this.gameObject.GetComponent<Material>().color = start_;
        yield return new WaitForSecondsRealtime(1);
        this.gameObject.GetComponent<Material>().color = flash_;
    }
}
