#include "ParryDB.h"

UParryDB::UParryDB() {
    this->m_ParryMatchClass = NULL;
    this->m_fParryDuration = 0.75f;
    this->m_iFrameBuildUp = 3;
    this->m_iFrameRelease = 10;
    this->m_ParryMovementdynamic = NULL;
    this->m_bParryConsumStamina = true;
    this->m_bParryConsumStaminaWhenSucceed = false;
    this->m_bOverrideAnimDynamicByCurve = false;
    this->m_fTrackingDuration = 0.05f;
    this->m_fParrySelectionAxisOffset = 0.00f;
    this->m_ParryLayerDataOnSucceed = NULL;
    this->m_ParriedAttackScaleCurve = NULL;
    this->m_fFrontBackMargin = 0.10f;
    this->m_fLeftRightMargin = 0.10f;
    this->m_fHighLowMargin = 0.10f;
    this->m_fFrontBackOffset = 0.00f;
    this->m_fLeftRightOffset = 0.00f;
    this->m_fHighLowOffset = 0.00f;
    this->m_fGuardGaugeCost = 0.00f;
    this->m_bHasImpactOnGuardGauge = true;
    this->m_bDebugDrawCapsuleXAxis = false;
    this->m_bDebugDrawCapsuleYAxis = false;
    this->m_bDebugDrawCapsuleZAxis = false;
    this->m_DefaultParryPropertyDB = NULL;
    this->m_ParryMatch = NULL;
}


