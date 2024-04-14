#include "AbsorbPropertyDB.h"

UAbsorbPropertyDB::UAbsorbPropertyDB() {
    this->m_uiAbsorbStackNumber = 1;
    this->m_bAbsorbIsDeathDodger = false;
    this->m_iAbsorbFreezeframeNumber = 0;
    this->m_bResistsInterruptAttack = false;
    this->m_bResistsGuardBreakAttack = false;
    this->m_bFromSpecialAbility = false;
    this->m_eAbsorbFeedbackType = EAbsorbFeedbackTypes::Normal;
    this->m_bGhostDamageActivated = false;
}


