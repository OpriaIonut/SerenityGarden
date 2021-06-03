using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

namespace SerenityGarden
{
    public class BossBase : MonoBehaviourPun
    {
        [Header("Inherited")]
        public BossScriptableObject bossStatus;

        public Gradient healthGradient;
        public Animator anim;
        public Image healthbar;

        protected float health;
        protected float nextDecisionTime;

        protected bool isDead;

        /// <summary>
        /// Set the size and color of the healthbar
        /// </summary>
        /// <param name="fill">Between 0-1</param>
        protected void SetHealthbar(float fill)
        {
            healthbar.rectTransform.localScale = new Vector3(fill, 1.0f, 1.0f);
            healthbar.color = healthGradient.Evaluate(fill);
        }

        public virtual void TakeDamage(float ammount)
        {
            health -= ammount;
            SetHealthbar(Mathf.Clamp(health / bossStatus.maxHealth, 0.0f, 1.0f));
            if (health <= 0)
            {
                Die();
            }
        }

        protected virtual void Die()
        {
            if (!isDead)
            {
                isDead = true;
                StartCoroutine("EndBossBattle");
            }
        }

        protected virtual IEnumerator EndBossBattle()
        {
            anim.SetTrigger("Die");
            yield return new WaitForSeconds(3.0f);
            BattleStageStateManager.instance.GameWon();
        }
    }
}