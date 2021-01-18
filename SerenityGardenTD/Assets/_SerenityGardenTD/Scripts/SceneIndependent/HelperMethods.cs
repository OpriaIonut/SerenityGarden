using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SerenityGarden
{
    public static class HelperMethods
    {
        /// <summary>
        /// Vector3.Distance uses a SQRT, which is too expensive, this is a faster alternative, but it won't give accurate distance.
        /// </summary>
        /// <param name="a"></param>
        /// <param name="b"></param>
        /// <returns></returns>
        public static float SquaredDistance(Vector3 a, Vector3 b)
        {
            return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z);
        }

        /// <summary>
        /// Rotate a transform to point the Z axis towards a target. Y axis differencces will be ignored. The rotation is instanly
        /// </summary>
        /// <param name="transfToRotate"></param>
        /// <param name="targetPos"></param>
        /// <param name="yAxisLock">True - no movement will happen on the y axis</param>
        public static void RotateObjTowardsTarget(Transform transfToRotate, Vector3 targetPos, bool yAxisLock)
        {
            if (yAxisLock)
                targetPos.y = transfToRotate.position.y;
            transfToRotate.LookAt(targetPos);
        }

        /// <summary>
        /// Rotate a transform to point the Z axis towards a target. Y axis differencces will be ignored. The rotation is spread over multiple frames
        /// </summary>
        /// <param name="transfToRotate"></param>
        /// <param name="targetPos"></param>
        /// <param name="interpolation">Speed * Time.deltatime</param>
        /// <param name="yAxisLock">True - no movement will happen on the y axis</param>
        public static void RotateObjTowardsTarget(Transform transfToRotate, Vector3 targetPos, bool yAxisLock, float interpolation)
        {
            if (yAxisLock)
                targetPos.y = transfToRotate.position.y;
            Vector3 inter = Vector3.Lerp(transfToRotate.position, targetPos, interpolation);
            transfToRotate.LookAt(inter);
        }

        /// <summary>
        /// Move transform towards destination.
        /// </summary>
        /// <param name="transfToMove"></param>
        /// <param name="destination"></param>
        /// <param name="maxDist">Speed * Time.deltatime</param>
        /// <param name="yAxisLock">True - no movement will happen on the y axis</param>
        public static void MoveTowards(Transform transfToMove, Vector3 destination, float maxDist, bool yAxisLock)
        {
            Vector3 moveDestination = destination;
            if(yAxisLock)
                moveDestination.y = transfToMove.position.y;
            transfToMove.position = Vector3.MoveTowards(transfToMove.position, moveDestination, maxDist);
        }

        private static System.Random rng = new System.Random();
        /// <summary>
        /// Method that can be called directly from a List<>, which will shuffle that list.
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="list"></param>
        public static void Shuffle<T>(this IList<T> list)
        {
            int n = list.Count;
            while (n > 1)
            {
                n--;
                int k = rng.Next(n + 1);
                T value = list[k];
                list[k] = list[n];
                list[n] = value;
            }
        }

        /// <summary>
        /// Will find the child of 'parent' that has the specified name. It is case sensitive so beware.
        /// </summary>
        /// <param name="parent">The point where the search starts</param>
        /// <param name="childName">The name of the child</param>
        /// <returns>Returns the child or null if not found.</returns>
        public static GameObject FindChildWithName(Transform parent, string childName)
        {
            Transform[] transf = parent.GetComponentsInChildren<Transform>();
            foreach(Transform item in transf)
            {
                if (item.gameObject.name == childName)
                    return item.gameObject;
            }
            return null;
        }

        /// <summary>
        /// WIll try to find the actual bounds of the object by searching in all childrens of it.
        /// </summary>
        /// <param name="target"></param>
        /// <param name="objBounds"></param>
        /// <returns></returns>
        public static bool FindBounds(GameObject target, out Bounds objBounds)
        {
            objBounds = new Bounds();
            MeshRenderer targetMeshRenderer = target.GetComponent<MeshRenderer>();

            if (targetMeshRenderer != null)
            {
                //If the object has a mesh renderer then take it's bounds
                objBounds.max = targetMeshRenderer.bounds.max;
                objBounds.min = targetMeshRenderer.bounds.min;
                objBounds.center = targetMeshRenderer.bounds.center;
            }
            else
            {
                //Otherwise, check if it has children
                List<MeshRenderer> childObj = new List<MeshRenderer>();
                AddAllChildrenRecursively(childObj, target.transform);

                if (childObj.Count == 0)
                {
                    Debug.LogWarning("Warning! Object: " + target.name + " doesn't have a MeshRenderer and it's child objects doesn't have it either. Can't calculate bounds. Stopping generation...");
                    return false;
                }

                Vector3 boundsMin, boundsMax;

                boundsMin = childObj[0].bounds.min;
                boundsMax = childObj[0].bounds.max;

                //If it does have children, then calculate the min and max bounds
                foreach (MeshRenderer rend in childObj)
                {
                    if (boundsMin.x > rend.bounds.min.x)
                        boundsMin.x = rend.bounds.min.x;
                    if (boundsMin.y > rend.bounds.min.y)
                        boundsMin.y = rend.bounds.min.y;
                    if (boundsMin.z > rend.bounds.min.z)
                        boundsMin.z = rend.bounds.min.z;

                    if (boundsMax.x < rend.bounds.max.x)
                        boundsMax.x = rend.bounds.max.x;
                    if (boundsMax.y < rend.bounds.max.y)
                        boundsMax.y = rend.bounds.max.y;
                    if (boundsMax.z < rend.bounds.max.z)
                        boundsMax.z = rend.bounds.max.z;
                }
                //Calculate the center and set the center
                objBounds.center = (boundsMin + boundsMax) / 2.0f;
                objBounds.min = boundsMin;
                objBounds.max = boundsMax;
            }
            return true;
        }

        /// <summary>
        /// Used by FindBounds method
        /// </summary>
        /// <param name="childObj"></param>
        /// <param name="parent"></param>
        private static void AddAllChildrenRecursively(List<MeshRenderer> childObj, Transform parent)
        {
            foreach (Transform child in parent)
            {
                MeshRenderer rend = child.GetComponent<MeshRenderer>();
                if (rend != null)
                    childObj.Add(rend);

                AddAllChildrenRecursively(childObj, child);
            }
        }
    }
}