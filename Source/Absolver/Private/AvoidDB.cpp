#include "AvoidDB.h"

UAvoidDB::UAvoidDB() {
    this->m_AvoidMatchConditionClass = NULL;
    this->m_bHasImpactOnGuardGauge = true;
    this->m_fGuardGaugeCost = 15.00f;
    this->m_bAvoidConsumStamina = false;
    this->m_bOverrideAnimDynamicByCurve = false;
    this->m_AvoidMovementdynamic = NULL;
    this->m_fAvoidDuration = 0.97f;
    this->m_iFrameBuildUp = 3;
    this->m_iFrameRelease = 12;
    this->m_fTrackingDuration = 0.10f;
    this->m_fJumpSelectionAngleWidth = 90.00f;
    this->m_fDuckSelectionAngleWidth = 90.00f;
    this->m_fDodgeAvoidNorthAngle = 90.00f;
    this->m_fDodgeAvoidSouthAngle = 90.00f;
    this->m_DefaultAvoidPropertyDBs[0] = NULL;
    this->m_DefaultAvoidPropertyDBs[1] = NULL;
    this->m_DefaultAvoidPropertyDBs[2] = NULL;
    this->m_DefaultAvoidPropertyDBs[3] = NULL;
    this->m_DefaultAvoidPropertyDBs[4] = NULL;
    this->m_DefaultAvoidPropertyDBs[5] = NULL;
    this->m_DefaultAvoidPropertyDBs[6] = NULL;
    this->m_fAvoidedDuration[0] = 0.00f;
    this->m_fAvoidedDuration[1] = 0.00f;
    this->m_fAvoidedDuration[2] = 0.00f;
    this->m_fAvoidedDuration[3] = 0.00f;
    this->m_fAvoidedDuration[4] = 0.00f;
    this->m_fAvoidedDuration[5] = 0.00f;
    this->m_fAvoidedDuration[6] = 0.00f;
    this->m_SuperAvoidedDuration[0] = 0.00f;
    this->m_SuperAvoidedDuration[1] = 0.00f;
    this->m_SuperAvoidedDuration[2] = 0.00f;
    this->m_SuperAvoidedDuration[3] = 0.00f;
    this->m_SuperAvoidedDuration[4] = 0.00f;
    this->m_SuperAvoidedDuration[5] = 0.00f;
    this->m_SuperAvoidedDuration[6] = 0.00f;
    this->m_fAvoidSuccessfulRefillValue = 1.00f;
    this->m_fSuperAvoidSuccessfulRefillValue = 1.00f;
    this->m_fAvoidSuccessfulGuardGaugeRefillValue = 1.00f;
    this->m_fSuperAvoidSuccessfulGuardGaugeRefillValue = 1.00f;
    this->m_AvoidedAttackScaleCurves[0] = NULL;
    this->m_AvoidedAttackScaleCurves[1] = NULL;
    this->m_AvoidedAttackScaleCurves[2] = NULL;
    this->m_AvoidedAttackScaleCurves[3] = NULL;
    this->m_AvoidedAttackScaleCurves[4] = NULL;
    this->m_AvoidedAttackScaleCurves[5] = NULL;
    this->m_AvoidedAttackScaleCurves[6] = NULL;
    this->m_iOrdersAllowedToPushAvoidSuccessfulLayer = 0;
    this->m_iSuperAvoidOrders = 0;
    this->m_AvoidMatchCondition = NULL;
}


