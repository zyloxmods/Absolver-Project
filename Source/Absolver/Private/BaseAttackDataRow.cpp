#include "BaseAttackDataRow.h"

FBaseAttackDataRow::FBaseAttackDataRow() {
    this->m_iNbFrameStuned = 0;
    this->m_iNbFrameStunedOnGuard = 0;
    this->m_fKnockBackDistance = 0.00f;
    this->m_fGuardKnockBackDistance = 0.00f;
    this->m_fGuardDamage = 0.00f;
    this->m_fDamage = 0.00f;
    this->m_eHitTarget = EAttackTarget::High;
    this->m_eAttackPower = EAttackPowers::Light;
    this->m_bIsInterruptAttack = false;
    this->m_bCanGuardBreak = false;
    this->m_bIsDisarmAttack = false;
}

