using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class CameraMovement : MonoBehaviour
    {
        [Header("Speed")]
        public float zoomSpeed = 50.0f;
        public float panSpeed = 5.0f;

        public float androidZoomSpeed = 0.1f;
        public float androidPanSpeed = 25.0f;

        [Header("Limits")]
        public float zoomInLimit = 4.0f;
        public float zoomOutLimit = -2.0f;
        public float horizontalPanLimit = 3.0f;
        public float verticalPanLimit = 3.0f;

        private float currentZoom = 0.0f;
        private float normalizedZoom = 0.0f;

        private float currentHorizontalPan = 0.0f;
        private float currentVerticalPan = 0.0f;

        private Rect screenRect;

        private Vector2 previousTapPos;
        private float previousTouchDist;

        private void Start()
        {
            screenRect = new Rect(0, 0, Screen.width, Screen.height);
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

            float zoomAmount = zoomFactor * zoomSpeed * Time.deltaTime;
            if ((zoomAmount >= 0 && currentZoom < zoomInLimit) || (zoomAmount <= 0 && currentZoom > zoomOutLimit))
            {
                currentZoom += zoomAmount;
                if (currentZoom > 0.0f)
                    normalizedZoom = Mathf.Clamp(currentZoom / zoomInLimit, 0.0f, 1.0f);
                else
                    normalizedZoom = 0.0f;
                transform.Translate(Vector3.forward * zoomAmount, Space.Self);
            }
            float horizontalAmount = horizontalFactor * panSpeed * Time.deltaTime;
            if ((horizontalAmount >= 0 && currentHorizontalPan < horizontalPanLimit * normalizedZoom) || (horizontalAmount <= 0 && currentHorizontalPan > -horizontalPanLimit * normalizedZoom))
            {
                horizontalAmount *= normalizedZoom;
                currentHorizontalPan += horizontalAmount;
                transform.Translate(Vector3.right * horizontalAmount, Space.World);
            }

            float verticalAmount = verticalFactor * panSpeed * Time.deltaTime;
            if ((verticalAmount >= 0 && currentVerticalPan < verticalPanLimit * normalizedZoom) || (verticalAmount <= 0 && currentVerticalPan > -verticalPanLimit * normalizedZoom))
            {
                verticalAmount *= normalizedZoom;
                currentVerticalPan += verticalAmount;
                transform.Translate(Vector3.forward * verticalAmount, Space.World);
            }
        }
    }
}