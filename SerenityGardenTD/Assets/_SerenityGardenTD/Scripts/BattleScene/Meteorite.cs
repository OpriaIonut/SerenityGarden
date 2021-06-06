using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

namespace SerenityGarden
{
    public class Meteorite : MonoBehaviourPun
    {
        public float speed = 10.0f;
        public GameObject explosionVFX;

        private float damage;
        private bool aoe;

        private TurretBase target;
        private Rigidbody rb;

        private GamePauseManager pauseManager;
        private Vector3 previousVelocity;

        private void Start()
        {
            rb = GetComponent<Rigidbody>();
            pauseManager = GamePauseManager.instance;

            pauseManager.AddPauseEvent(OnPauseGame);
            pauseManager.AddUnpauseEvent(OnResumeGame);

            if (!photonView.IsMine)
                FindObjectOfType<FireDemon>().NetMeteorInstance = this;
        }

        private void FixedUpdate()
        {
            if(target != null && !GamePauseManager.instance.GamePaused)
            {
                Vector3 direction = target.transform.position - transform.position; //Calculate the image that you need to shot towards
                rb.velocity += direction.normalized * speed * Time.fixedDeltaTime;
            }
        }

        private void OnPauseGame()
        {
            if (rb != null)
            {
                previousVelocity = rb.velocity;
                rb.velocity = Vector3.zero;
            }
        }

        private void OnResumeGame()
        {
            if (rb != null)
                rb.velocity = previousVelocity;
        }

        public void SetTarget(TurretBase _target, float _damage, bool _aoe)
        {
            target = _target;
            damage = _damage;
            aoe = _aoe;

            TrailRenderer trail = GetComponentInChildren<TrailRenderer>();
            if(trail != null)
            {
                trail.startWidth = aoe ? 1.0f : 0.1f;
                trail.time = aoe ? 0.8f : 0.2f;
            }
        }

        private bool calledDestroy = false;

        private void OnTriggerEnter(Collider other)
        {
            if (!aoe)
            {
                if (target != null && other.transform.root.gameObject == target.gameObject)
                {
                    target.Health -= damage;
                    Destroy(gameObject, 0.5f);
                    GetComponentInChildren<MeshRenderer>().enabled = false;
                    GetComponentInChildren<SphereCollider>().enabled = false;
                }
            }
            else
            {
                TurretBase turret = other.transform.root.gameObject.GetComponent<TurretBase>();
                if(turret != null)
                {
                    turret.Health -= damage;
                    if(!calledDestroy)
                    {
                        Destroy(gameObject, 0.5f);
                        calledDestroy = true;

                        GameObject explosion = Instantiate(explosionVFX);
                        explosion.transform.position = transform.position;
                        Destroy(explosion, 1.0f);
                        explosionVFX.GetComponent<ParticleSystemRenderer>().maxParticleSize = 1.0f;
                    }
                }
            }
        }

        //public void OnPhotonInstantiate(PhotonMessageInfo info)
        //{
        //    object[] initData = info.photonView.InstantiationData;

        //    if (initData != null)
        //    {
        //        int targetId = (int)initData[0];
        //        TurretBase meteorTarget = null;
        //        PhotonView[] views = FindObjectsOfType<PhotonView>();
        //        foreach (PhotonView view in views)
        //        {
        //            if (view.ViewID == targetId)
        //            {
        //                meteorTarget = view.gameObject.GetComponent<TurretBase>();
        //                break;
        //            }
        //        }
        //        FireDemon boss = FindObjectOfType<FireDemon>();
        //        if (boss != null)
        //        {
        //            boss.NetMeteorInstance = this;
        //            boss.NetMeteorTarget = meteorTarget;
        //        }
        //    }
        //}
    }
}