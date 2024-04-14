#include "BaseUseCondition.h"

UBaseUseCondition::UBaseUseCondition() {
}

bool UBaseUseCondition::IsFulfilled_Implementation() {
    return false;
}

void UBaseUseCondition::GetSurroundingPlayersNumInRange(float _fRange, int32& _iOutPlayersInside, int32& _iOutTotalPlayers) {
}

bool UBaseUseCondition::BPF_IsTargetUsingPower(UUsableItemData* _targetUsingPower) const {
    return false;
}

bool UBaseUseCondition::BPF_IsTargetPlayingOrder(EOrderType _eOrderType) const {
    return false;
}

bool UBaseUseCondition::BPF_IsStaminaRatioBelow(float _fStaminaThreshold) const {
    return false;
}

bool UBaseUseCondition::BPF_IsHealthRatioBelow(float _fHealthThreshold) const {
    return false;
}

bool UBaseUseCondition::BPF_IsEffectActiveOnTarget(UEffectData* _effect) const {
    return false;
}

bool UBaseUseCondition::BPF_IsEffectActiveOnQuerier(UEffectData* _effect) const {
    return false;
}

bool UBaseUseCondition::BPF_IsDistFromTargetMatchMood(EMainBehaviors _eMood) const {
    return false;
}

bool UBaseUseCondition::BPF_IsDistFromTargetMatchCurrentMood() const {
    return false;
}

bool UBaseUseCondition::BPF_IsDamageTakenRatioBelow(float _fDmgTakenThreshold, float _fTime) const {
    return false;
}

bool UBaseUseCondition::BPF_IsAttackIncoming(EWeaponFamilies& _eOutAttackNature, float& _fOutTimeTillStrike) const {
    return false;
}

bool UBaseUseCondition::BPF_HasAttackTicket() const {
    return false;
}

float UBaseUseCondition::BPF_GetDistFromTarget() const {
    return 0.0f;
}

float UBaseUseCondition::BPF_GetDifficultyLevel() const {
    return 0.0f;
}

float UBaseUseCondition::BPF_GetDamageTaken(float _fTime) const {
    return 0.0f;
}

EQuadrantTypes UBaseUseCondition::BPF_GetCurrentQuadrant() const {
    return EQuadrantTypes::FrontLeft;
}

EMainBehaviors UBaseUseCondition::BPF_GetCurrentMood(float& _fOutTimeSpendInMood) const {
    return EMainBehaviors::Agressive;
}


