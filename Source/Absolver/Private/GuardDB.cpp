#include "GuardDB.h"

UGuardDB::UGuardDB() {
    this->m_fGuardAngleRootToHips = 60.00f;
    this->m_fGuardAngleHipsToRoot = 150.00f;
    this->m_bGuardReorientBackToFront = true;
    this->m_DynamicEnteringPrep = NULL;
    this->m_fEnteringPrepDuration = 0.20f;
    this->m_DynamicExitingPrep = NULL;
    this->m_fExitingPrepDuration = 0.40f;
    this->m_fPrepRange = 500.00f;
    this->m_bPrepForbidMove = true;
    this->m_fSpeedCoeff = 0.40f;
    this->m_fKnockbackCoeff = 0.85f;
}


