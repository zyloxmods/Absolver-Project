#include "GearDataRow.h"

FGearDataRow::FGearDataRow() {
    this->m_GearDataAsset = NULL;
    this->m_GearDataAssetDirty = NULL;
    this->m_GearDataAssetGold = NULL;
    this->m_fVitalityBonus = 0.00f;
    this->m_fVitalityBonusDirty = 0.00f;
    this->m_fVitalityBonusGold = 0.00f;
    this->m_fStaminaBonus = 0.00f;
    this->m_fStaminaBonusDirty = 0.00f;
    this->m_fStaminaBonusGold = 0.00f;
    this->m_fShardBonus = 0.00f;
    this->m_fShardBonusDirty = 0.00f;
    this->m_fShardBonusGold = 0.00f;
    this->m_fWeight = 0.00f;
    this->m_fWeightDirty = 0.00f;
    this->m_fWeightGold = 0.00f;
    this->m_fGuardCoefficient = 0.00f;
    this->m_fGuardCoefficientDirty = 0.00f;
    this->m_fGuardCoefficientGold = 0.00f;
    this->m_fGuardSpecialCoefficient = 0.00f;
    this->m_fGuardSpecialCoefficientDirty = 0.00f;
    this->m_fGuardSpecialCoefficientGold = 0.00f;
    this->m_fAttackSpecialRatio = 0.00f;
    this->m_fAttackSpecialRatioDirty = 0.00f;
    this->m_fAttackSpecialRatioGold = 0.00f;
    this->m_fDefenseBonus = 0.00f;
    this->m_fDefenseBonusDirty = 0.00f;
    this->m_fDefenseBonusGold = 0.00f;
    this->m_fSpecialDefenseBonus = 0.00f;
    this->m_fSpecialDefenseBonusDirty = 0.00f;
    this->m_fSpecialDefenseBonusGold = 0.00f;
    this->m_uiShardCost = 0;
    this->m_uiShardCostDirty = 0;
    this->m_uiShardCostGold = 0;
    this->m_fWeaponCollisionCapsuleRadius = 0.00f;
    this->m_fWeaponCollisionCapsuleHalfHeight = 0.00f;
    this->m_fWeaponCollisionCapsuleOffset = 0.00f;
    this->m_eSurfaceType = SurfaceType_Default;
    this->m_fDisarmGaugeMax = 0.00f;
    this->m_fDurabilityGaugeMax = 0.00f;
    this->m_fGameModeLootWeight = 0.00f;
    this->m_fGameModeLootWeightDirty = 0.00f;
    this->m_fGameModeLootWeightGold = 0.00f;
    this->m_eAttackBonusScale0 = EAttributeScales::S;
    this->m_eAttackBonusScale1 = EAttributeScales::S;
    this->m_eAttackBonusScale2 = EAttributeScales::S;
    this->m_eAttackBonusScale3 = EAttributeScales::S;
    this->m_eAttackBonusScale4 = EAttributeScales::S;
    this->m_eAttackBonusScale5 = EAttributeScales::S;
    this->m_eGearRarity = EGearRarity::Common;
}

