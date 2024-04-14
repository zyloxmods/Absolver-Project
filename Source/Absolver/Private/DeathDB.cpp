#include "DeathDB.h"

UDeathDB::UDeathDB() {
    this->m_fRagdollTime = 0.20f;
    this->m_fFallRagdollTime = 0.20f;
    this->m_fDeathBPEventTime = 1.50f;
    this->m_fCanBeRevivedTime = 3.00f;
    this->m_DefaultAnim = NULL;
    this->m_fKnockBackDistance[0] = 0.00f;
    this->m_fKnockBackDistance[1] = 0.00f;
    this->m_fKnockBackDistance[2] = 0.00f;
    this->m_iNbFrameStuned[0] = 0;
    this->m_iNbFrameStuned[1] = 0;
    this->m_iNbFrameStuned[2] = 0;
    this->m_DownInteractiveElement = NULL;
}


