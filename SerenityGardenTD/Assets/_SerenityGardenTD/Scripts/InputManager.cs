using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

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

        [Header("Debug")]
        //In case we hit a child object, we will also retain the top-most parent of the object
        public GameObject clickedParent;
        public GameObject clickedObject;    //The exact thing that we clicked
        public Vector2 pressPosition;       //The position in screen space of the click/tap
        public Vector2 releasePosition;     //The position on the screen of the release click/tap
        public bool isPressed = false;
        public float pressTime;             //The time that we pressed at
        public float releaseTime;           //The time that we released at

        #region Delegates

        //Delegates for calling other script's functionality on certain user input
        public delegate void InputEventOnPress();
        private InputEventOnPress Event_OnPress;
        /// <summary>
        /// All methods that need to be called when pressing click/tap should call this method
        /// </summary>
        /// <param name="subscriber">A method that will be called.</param>
        public void AddOnPressEvent(InputEventOnPress subscriber)           {   Event_OnPress += subscriber;        }
        public void RemoveOnPressEvent(InputEventOnPress unsubscriber)      {   Event_OnPress -= unsubscriber;      }


        public delegate void InputEventOnRelease();
        private InputEventOnRelease Event_OnRelease;
        /// <summary>
        /// All methods that need to be called when pressing click/tap should call this method
        /// </summary>
        /// <param name="subscriber">A method that will be called.</param>
        public void AddOnReleaseEvent(InputEventOnRelease subscriber)       {   Event_OnRelease += subscriber;      }
        public void RemoveOnReleaseEvent(InputEventOnRelease unsubscriber)  {   Event_OnRelease -= unsubscriber;    }


        public delegate void InputEventOnDrag();
        private InputEventOnDrag Event_OnDrag;
        /// <summary>
        /// All methods that need to be called when pressing click/tap should call this method
        /// </summary>
        /// <param name="subscriber">A method that will be called.</param>
        public void AddOnDragEvent(InputEventOnDrag subscriber)             {   Event_OnDrag += subscriber;         }
        public void RemoveOnDragEvent(InputEventOnDrag unsubscriber)        {   Event_OnDrag -= unsubscriber;       }

        #endregion

        private void Update()
        {
            //If the mouse is over an ui component, stop input
            if (EventSystem.current.IsPointerOverGameObject())
                return;

#if UNITY_STANDALONE
            
            if(Input.GetMouseButtonDown(0))
            {
                pressPosition = Input.mousePosition;
                isPressed = true;
                pressTime = Time.time;
                GetHitObjects();    //Get the object that we clicked
                //Call all methods that are subscribed to this event
                if (Event_OnPress != null && Event_OnPress.GetInvocationList().Length != 0)
                    Event_OnPress.Invoke();
            }
            if(Input.GetMouseButtonUp(0))
            {
                releasePosition = Input.mousePosition;
                isPressed = false;
                releaseTime = Time.time;
                //Call all methods that are subscribed to this event
                if (Event_OnRelease != null && Event_OnRelease.GetInvocationList().Length != 0)
                    Event_OnRelease.Invoke();
            }
            if(Input.GetMouseButton(0))
            {
                //Call all methods that are subscribed to this event
                if (Event_OnDrag != null && Event_OnDrag.GetInvocationList().Length != 0)
                    Event_OnDrag.Invoke();
            }

#endif

#if UNITY_ANDROID

            //Same code, but for android
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

        /// <summary>
        /// Using a raycast, it will find the object that we clicked. The object needs to have a collider.
        /// </summary>
        private void GetHitObjects()
        {
            Ray cameraRay = Camera.main.ScreenPointToRay(pressPosition);
            RaycastHit hit;
            if(Physics.Raycast(cameraRay, out hit))
            {
                //We should get the uppermost parent, because we may have hit a sub-component of an object, which will mess up certain things
                clickedObject = hit.collider.gameObject;
                clickedParent = clickedObject.transform.root.gameObject;
            }
            else
            {
                clickedObject = null;
                clickedParent = null;
            }
        }
    }
}