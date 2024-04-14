#include "PlayerFightingComponent.h"
#include "Net/UnrealNetwork.h"

UPlayerFightingComponent::UPlayerFightingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->m_bIsInDialog = false;
    this->m_DefaultEquipmentSelection = NULL;
    this->m_uiCombatStyle = 255;
    this->m_fLockMoveFadeDuration = 1.00f;
    this->m_CompassDB = NULL;
    this->m_fEnemyBehindDist = 600.00f;
    this->m_fEnemyBehindCosAngle = 0.60f;
    this->m_bFakePlayer = false;
}

void UPlayerFightingComponent::ServerSetZoneStatus_Implementation(const FMatchmakingZoneStatus& _matchmakingZoneStatus) {
}
bool UPlayerFightingComponent::ServerSetZoneStatus_Validate(const FMatchmakingZoneStatus& _matchmakingZoneStatus) {
    return true;
}

void UPlayerFightingComponent::ServerChangeCombatStyle_Implementation(uint8 _uiNewCombatStyle) {
}
bool UPlayerFightingComponent::ServerChangeCombatStyle_Validate(uint8 _uiNewCombatStyle) {
    return true;
}

void UPlayerFightingComponent::OnTargetChangedCallback(AActor* _oldTarget, AActor* _newTarget) {
}

void UPlayerFightingComponent::OnRepMatchmakingZoneStatus() {
}

void UPlayerFightingComponent::OnRep_Dialog() {
}

void UPlayerFightingComponent::OnRep_CombatStyle() {
}

EFightingActionState UPlayerFightingComponent::GetCurrentActionState() const {
    return EFightingActionState::None;
}

void UPlayerFightingComponent::BPF_SetIsInEndOfMovesetTutorial(bool _bActivate) {
}

void UPlayerFightingComponent::BPF_ServerSetIsInDialog_Implementation(bool _bInDialog) {
}
bool UPlayerFightingComponent::BPF_ServerSetIsInDialog_Validate(bool _bInDialog) {
    return true;
}

void UPlayerFightingComponent::BPF_ForceEnterMeditation() {
}

void UPlayerFightingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerFightingComponent, m_bIsInDialog);
    DOREPLIFETIME(UPlayerFightingComponent, m_uiCombatStyle);
    DOREPLIFETIME(UPlayerFightingComponent, m_MatchmakingZoneStatus);
}


