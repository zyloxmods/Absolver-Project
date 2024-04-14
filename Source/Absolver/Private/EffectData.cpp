#include "EffectData.h"

UEffectData::UEffectData() {
    this->m_fDuration = 0.00f;
    this->m_bHitInteruptible = false;
    this->m_bInfinite = false;
    this->m_fStaminaRefillCoeff = 1.00f;
    this->m_fStaminaActionsCostCoeff = 1.00f;
    this->m_fStaminaRushCostCoeff = 1.00f;
    this->m_fStaminaHitOnGuardCostCoeff = 1.00f;
    this->m_bShardFreeze = false;
    this->m_fShardRefillCoeff = 1.00f;
    this->m_fKnockbackCoeff = 1.00f;
    this->m_fBluntProtectionValueAdded = 0.00f;
    this->m_fCutProtectionValueAdded = 0.00f;
    this->m_fWeightAdded = 0.00f;
    this->m_fHealthRegenRateAdded = 0.00f;
    this->m_fInstantHealthRecovery = 0.00f;
    this->m_fInflictedDamageConversionCoeff = 0.00f;
    this->m_bHealIsCapped = false;
    this->m_fGhostDamageBonus = 0.00f;
    this->m_fAttackDamageMultiplier = 1.00f;
    this->m_fDamageReceivedMultiplier = 1.00f;
    this->m_fBarehandSpecialDamageRatio = 0.00f;
    this->m_iResilienceBonus = 0;
    this->m_fImpactOnWeaponDurabilityMultiplier = 1.00f;
}


