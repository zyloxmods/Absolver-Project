#include "AbsorbDB.h"

UAbsorbDB::UAbsorbDB() {
    this->m_fDuration = 1.00f;
    this->m_fAttackScaleScurve = NULL;
    this->m_fSpecialAbilityDuration = 1.00f;
    this->m_iFrameBuildUp = 4;
    this->m_iFrameRelease = 17;
    this->m_fSpecialAbilityGuardGaugeCost = 0.00f;
    this->m_SpecialAbilityMovementDynamic = NULL;
    this->m_bSpecialAbilityConsumStamina = false;
    this->m_bSpecialAbilityHasImpactOnGuardGauge = true;
    this->m_bSpecialAbilityOverrideAnimDynamicByCurve = false;
    this->m_fSpecialAbilityTrackingDuration = 0.00f;
    this->m_DefaultAbsorbPropertyDB = NULL;
    this->m_fDamageToRecoryRatio = 0.60f;
    this->m_fDamageToRecoryRatioOnGuard = 0.10f;
    this->m_fSpecialAbilityAbsorbSuccessRefillValue = 50.00f;
    this->m_fSpecialAbilitySuperAbsorbSuccessRefillValue = 50.00f;
    this->m_fAbsorbSuccessShardRefill = 0.00f;
    this->m_fSuperAbsorbSuccessShardRefill = 0.00f;
    this->m_uiNormalAbsorbStackNumber = 1;
    this->m_uiSuperAbsorbStackNumber = 2;
    this->m_bGhostDamageActivatedForAttacks = true;
    this->m_iOrdersAllowedToPushAbsorbSuccessfulLayer = 0;
    this->m_bNormalAbsorbIsDeathDodger = false;
    this->m_bSuperAbsorbIsDeathDodger = true;
    this->m_iSuperAbsorbFreezeframe = 0;
    this->m_iSuperAbsorbOrders = 0;
}


