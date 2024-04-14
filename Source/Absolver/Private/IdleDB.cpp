#include "IdleDB.h"

UIdleDB::UIdleDB() {
    this->m_fReorientationTime = 0.20f;
    this->m_fReorientationTimeForEarlyBlendOutFromAttack = 0.40f;
    this->m_bForceTargetQuadrant = false;
    this->m_eForcedTargetQuadrant = EQuadrantTypes::None;
}


