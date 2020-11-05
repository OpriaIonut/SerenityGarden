using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public class InputManager : MonoBehaviour
    {
        #region Singleton

        public static InputManager instance;
        private void Awake()
        {
            if (instance != null)
            {
                Debug.LogWarning("Warning! Multiple instances of InputManager in scene. Deleting from: " + gameObject.name);
                Destroy(this);
            }
            else
                instance = this;
        }

        #endregion

        public GameObject clickedObject;
        public Vector2 pressPosition;
        public Vector2 releasePosition;
        public bool isPressed = false;
        public float pressTime;
        public float releaseTime;

        #region Delegates

        public delegate void InputEventOnPress();
        private InputEventOnPress Event_OnPress;
        public void AddOnPressEvent(InputEventOnPress subscriber)           {   Event_OnPress += subscriber;        }
        public void RemoveOnPressEvent(InputEventOnPress unsubscriber)      {   Event_OnPress -= unsubscriber;      }


        public delegate void InputEventOnRelease();
        private InputEventOnRelease Event_OnRelease;
        public void AddOnReleaseEvent(InputEventOnRelease subscriber)       {   Event_OnRelease += subscriber;      }
        public void RemoveOnReleaseEvent(InputEventOnRelease unsubscriber)  {   Event_OnRelease -= unsubscriber;    }


        public delegate void InputEventOnDrag();
        private InputEventOnDrag Event_OnDrag;
        public void AddOnDragEvent(InputEventOnDrag subscriber)             {   Event_OnDrag += subscriber;         }
        public void RemoveOnDragEvent(InputEventOnDrag unsubscriber)        {   Event_OnDrag -= unsubscriber;       }

        #endregion

        private void Update()
        {
#if UNITY_STANDALONE
            
            if(Input.GetMouseButtonDown(0))
            {
                pressPosition = Input.mousePosition;
                isPressed = true;
                pressTime = Time.time;
                GetHitObjects();
                if (Event_OnPress != null && Event_OnPress.GetInvocationList().Length != 0)
                    Event_OnPress.Invoke();
            }
            if(Input.GetMouseButtonUp(0))
            {
                releasePosition = Input.mousePosition;
                isPressed = false;
                releaseTime = Time.time;
                if (Event_OnRelease != null && Event_OnRelease.GetInvocationList().Length != 0)
                    Event_OnRelease.Invoke();
            }
            if(Input.GetMouseButton(0))
            {
                if(Event_OnDrag != null && Event_OnDrag.GetInvocationList().Length != 0)
                    Event_OnDrag.Invoke();
            }

#endif

#if UNITY_ANDROID

            if(Input.touchCount > 0)
            {
                Touch currentTouch = Input.GetTouch(0);
                if(currentTouch.phase == TouchPhase.Began)
                {
                    pressPosition = currentTouch.position;
                    isPressed = true;
                    pressTime = Time.time;
                    GetHitObjects();
                    if (Event_OnPress != null && Event_OnPress.GetInvocationList().Length != 0)
                        Event_OnPress.Invoke();
                }
                if(currentTouch.phase == TouchPhase.Ended)
                {
                    releasePosition = currentTouch.position;
                    isPressed = false;
                    releaseTime = Time.time;
                    if (Event_OnRelease != null && Event_OnRelease.GetInvocationList().Length != 0)
                        Event_OnRelease.Invoke();
                }
                if(currentTouch.phase == TouchPhase.Moved)
                {
                    if (Event_OnDrag != null && Event_OnDrag.GetInvocationList().Length != 0)
                        Event_OnDrag.Invoke();
                }
            }

#endif
        }

        private void GetHitObjects()
        {
            Ray cameraRay = Camera.main.ScreenPointToRay(pressPosition);
            RaycastHit hit;
            if(Physics.Raycast(cameraRay, out hit))
            {
                //We should get the uppermost parent, because we may have hit a sub-component of an object, which will mess up certain things
                clickedObject = hit.collider.transform.root.gameObject;
            }
            else
            {
                clickedObject = null;
            }
        }
    }
}