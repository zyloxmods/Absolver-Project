#include "DodgeDB.h"

UDodgeDB::UDodgeDB() {
    this->m_fDodgeMinDuration = 0.30f;
    this->m_DodgeMaxDurationArray[0] = 0.00f;
    this->m_DodgeMaxDurationArray[1] = 0.00f;
    this->m_DodgeMaxDurationArray[2] = 0.00f;
    this->m_DodgeMaxDurationArray[3] = 0.00f;
    this->m_DodgeMovementLengthArray[0] = 0.00f;
    this->m_DodgeMovementLengthArray[1] = 0.00f;
    this->m_DodgeMovementLengthArray[2] = 0.00f;
    this->m_DodgeMovementLengthArray[3] = 0.00f;
    this->m_DodgeDynamic = NULL;
    this->m_bOverrideAnimDynamicByCurve = false;
    this->m_fDodgeMaxReorientationAngle = 180.00f;
    this->m_fDodgeReorientationDuration = 0.20f;
    this->m_bWantDodgeLock = true;
    this->m_fDodgeNoLockAngle = 10.00f;
    this->m_bDefaultDodgeQuadrantSwitchActivated = false;
    this->m_fGuardGaugeCost = 0.00f;
    this->m_bHasImpactOnGuardGauge = true;
    this->m_iFrameBuildUp = 3;
    this->m_iFrameInterruptibleRelease = 16;
    this->m_iFrameRelease = 10;
    this->m_GuardGaugeCostOverWeightRatio = NULL;
}


