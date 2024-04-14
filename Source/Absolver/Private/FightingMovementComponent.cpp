#include "FightingMovementComponent.h"
#include "Net/UnrealNetwork.h"

UFightingMovementComponent::UFightingMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->m_DodgeDB = NULL;
    this->m_eMoveStatus = EMoveStatus::None;
    this->m_BaseMovementDB = NULL;
    this->m_ChangeQuadrantDB = NULL;
    this->m_fFlyModeSpeed = 720.00f;
    this->m_fFlyModeRushSpeed = 2000.00f;
}

void UFightingMovementComponent::ServerSetMoveStatus_Implementation(EMoveStatus _eMoveStatus) {
}
bool UFightingMovementComponent::ServerSetMoveStatus_Validate(EMoveStatus _eMoveStatus) {
    return true;
}

void UFightingMovementComponent::ServerPopDesyncFromServer_Implementation(uint8 _uiResyncID) {
}
bool UFightingMovementComponent::ServerPopDesyncFromServer_Validate(uint8 _uiResyncID) {
    return true;
}

void UFightingMovementComponent::OnRep_MoveStatusChange() {
}

void UFightingMovementComponent::OnEffectAddedOrRemovedCallback(bool _bAdded, UEffectData* _effectData) {
}

FVector UFightingMovementComponent::GetRealVelocity() {
    return FVector{};
}

float UFightingMovementComponent::GetRealSpeed() {
    return 0.0f;
}

FVector UFightingMovementComponent::GetRealHorizontalVelocity() {
    return FVector{};
}

float UFightingMovementComponent::GetRealHorizontalSpeed() {
    return 0.0f;
}

void UFightingMovementComponent::BPF_SetMoveStatus(EMoveStatus _eMoveStatus) {
}

bool UFightingMovementComponent::BPF_IsRushing() const {
    return false;
}

float UFightingMovementComponent::BPF_GetFreeMoveOverallAnimSpeed(ESpeedState _eSpeedState) const {
    return 0.0f;
}

float UFightingMovementComponent::BPF_GetFreeMoveMinSpeed(ESpeedState _eSpeedState) const {
    return 0.0f;
}

float UFightingMovementComponent::BPF_GetFreeMoveMaxSpeed(ESpeedState _eSpeedState) const {
    return 0.0f;
}

float UFightingMovementComponent::BPF_GetFreeMoveAnimSpeed(ESpeedState _eSpeedState) const {
    return 0.0f;
}

EFallLevel UFightingMovementComponent::BPF_GetFallLevel() const {
    return EFallLevel::Light;
}

ESpeedState UFightingMovementComponent::BPF_GetCurrentSpeedState() const {
    return ESpeedState::V0;
}

void UFightingMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFightingMovementComponent, m_eMoveStatus);
}


