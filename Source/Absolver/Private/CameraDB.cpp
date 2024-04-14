#include "CameraDB.h"

UCameraDB::UCameraDB() {
    this->m_BehaviorTreeAsset = NULL;
    this->m_CameraDataDefault = NULL;
    this->m_fRatioToTarget = 0.50f;
    this->m_fLockDistMin = 20.00f;
    this->m_fLockDistMax = 500.00f;
    this->m_fLookAtUpOffset = 0.00f;
    this->m_TargetReachCurve = NULL;
    this->m_fTargetReachDuration = 2.00f;
    this->m_fUnlockOnPlaceCompensationTime = 1.00f;
    this->m_fLockPosDampingValue = 6.50f;
    this->m_uiCameraPoolNumber = 15;
    this->m_uiCameraBlenderPoolNumber = 10;
    this->m_DefaultTransition = NULL;
    this->m_fCollisionDampingFactor = 2.40f;
    this->m_fCollisionSphereMarginFactor = 1.10f;
}


