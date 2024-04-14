#include "AIStaminaManagementDataAsset.h"

UAIStaminaManagementDataAsset::UAIStaminaManagementDataAsset() {
    this->m_fStaminaMinToDiscardDash = 0.00f;
    this->m_fStaminaMinToDiscardGuard = 0.00f;
    this->m_fStaminaMinToDiscardDodge = 0.00f;
    this->m_fStaminaMinToDiscardAttack = 0.00f;
    this->m_fStaminaToEnterSafeStateRatio = 0.15f;
    this->m_fStaminaToExitSafeStateRatio = 0.45f;
}


