#include "OnHitDelayed.h"

FOnHitDelayed::FOnHitDelayed() {
    this->m_iTimeOfHit = 0;
    this->m_bIsGuarding = false;
    this->m_bIsPerfectLink = false;
    this->m_fDamage = 0.00f;
    this->m_uiOrderAttack = 0;
    this->m_bAbsorbed = false;
    this->m_bGuardBreak = false;
}

