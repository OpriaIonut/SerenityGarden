using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class CameraMovement : MonoBehaviour
    {
        public Transform dummy;

        [Header("Speed")]
        public float zoomSpeed = 50.0f;
        public float panSpeed = 5.0f;

        public float androidZoomSpeed = 0.1f;
        public float androidPanSpeed = 25.0f;

        [Header("Limits")]
        public float zoomInLimit = 4.0f;
        public float zoomOutLimit = -2.0f;

        [Tooltip("x - right, y - left")]
        public Vector2 horizontalPanLimit = new Vector2(3.0f, 3.0f);
        [Tooltip("x - up, y - down")]
        public Vector2 verticalPanLimit = new Vector2(4.0f, 3.0f);

        private float currentZoom = 0.0f;
        private float normalizedZoom = 0.0f;

        private Rect screenRect;

        private Vector2 previousTapPos;
        private float previousTouchDist;

        private float minHorizontal;
        private float maxHorizontal;
        private float minVertical;
        private float maxVertical;

        private Vector3 origin;

        private void Start()
        {
            screenRect = new Rect(0, 0, Screen.width, Screen.height);
            origin = transform.position;

            dummy.localPosition = new Vector3(transform.localPosition.x, transform.localPosition.y, zoomInLimit);
        }

        private void Update()
        {
            float zoomFactor = 0.0f;
            float horizontalFactor = 0.0f;
            float verticalFactor = 0.0f;

#if UNITY_STANDALONE

            if (screenRect.Contains(Input.mousePosition))
                zoomFactor = Input.mouseScrollDelta.y;
            horizontalFactor = Input.GetAxis("Horizontal");
            verticalFactor = Input.GetAxis("Vertical");

#endif

#if UNITY_ANDROID

            if(Input.touchCount == 1)
            {
                Touch currentTouch = Input.GetTouch(0);
                if(currentTouch.phase == TouchPhase.Began)
                {
                    previousTapPos = currentTouch.position;
                }
                if(currentTouch.phase == TouchPhase.Moved)
                {
                    Vector2 currentPos = currentTouch.position;

                    horizontalFactor = ((previousTapPos.x - currentPos.x) / Screen.width) * androidPanSpeed;
                    verticalFactor = ((previousTapPos.y - currentPos.y) / Screen.height) * androidPanSpeed;

                    previousTapPos = currentPos;
                }
            }
            else if (Input.touchCount == 2)
            {
                Touch firstTouch = Input.GetTouch(0);
                Touch secondTouch = Input.GetTouch(1);

                if(firstTouch.phase == TouchPhase.Began || secondTouch.phase == TouchPhase.Began)
                {
                    previousTouchDist = Vector2.Distance(firstTouch.position, secondTouch.position);
                }
                if(firstTouch.phase == TouchPhase.Moved || secondTouch.phase == TouchPhase.Moved)
                {
                    float currentDistance = Vector2.Distance(firstTouch.position, secondTouch.position);

                    if (currentDistance < previousTouchDist)
                        zoomFactor = -androidZoomSpeed;
                    else if (currentDistance > previousTouchDist)
                        zoomFactor = androidZoomSpeed;

                    previousTouchDist = currentDistance;
                }
            }
            

#endif
            Vector3 targetPos = transform.position;
            float zoomAmount = zoomFactor * zoomSpeed * Time.deltaTime;

            float horizontalAmount = horizontalFactor * panSpeed * Time.deltaTime;
            maxHorizontal = origin.x + horizontalPanLimit.x * normalizedZoom;
            minHorizontal = origin.x - horizontalPanLimit.y * normalizedZoom;

            float verticalAmount = verticalFactor * panSpeed * Time.deltaTime;
            maxVertical = origin.z + verticalPanLimit.x * normalizedZoom;
            minVertical = origin.z - verticalPanLimit.y * normalizedZoom;

            if ((zoomAmount > 0 && transform.position.y > dummy.position.y) || (zoomAmount < 0 && transform.localPosition.z > zoomOutLimit))
            {
                currentZoom = Mathf.Clamp(currentZoom + zoomAmount, zoomOutLimit, zoomInLimit);
                if (currentZoom > 0.0f)
                    normalizedZoom = Mathf.Clamp(currentZoom / zoomInLimit, 0.0f, 1.0f);
                else
                    normalizedZoom = 0.0f;
                transform.localPosition = new Vector3(transform.localPosition.x, transform.localPosition.y, currentZoom);
                targetPos = transform.position;
            }
            if (normalizedZoom == 0)
            {
                minVertical = transform.position.z;
                maxVertical = transform.position.z;
            }

            if ((horizontalAmount > 0 && targetPos.x < maxHorizontal) || (horizontalAmount < 0 && targetPos.x > minHorizontal))
            {
                targetPos.x += horizontalAmount * normalizedZoom;
            }
            if ((verticalAmount > 0 && targetPos.z < maxVertical) || (verticalAmount < 0 && targetPos.z > minVertical))
            {
                targetPos.z += verticalAmount * normalizedZoom;
            }
            targetPos.x = Mathf.Clamp(targetPos.x, minHorizontal, maxHorizontal);
            targetPos.z = Mathf.Clamp(targetPos.z, minVertical, maxVertical);

            transform.position = targetPos;
        }
    }
}