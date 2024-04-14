#include "HealthComponent.h"
#include "Net/UnrealNetwork.h"

UHealthComponent::UHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->m_bCanRecoverHealth = true;
    this->m_fHealth = 750.00f;
    this->m_fRecoveryRate = 0.00f;
    this->m_fRecoveryCooldownInit = 0.00f;
    this->m_fMaxHealth = 750.00f;
    this->m_fBonusMaxHealth = 0.00f;
    this->m_fGhostDamageRecoveryRate = 5.00f;
    this->m_fGhostDamage = 0.00f;
    this->m_bIsDown = false;
    this->m_bHitOrderPlayedForCurrentDeath = false;
    this->m_iTimeToEndRevive = 0;
    this->m_fReviveTime = 0.00f;
    this->m_fReviveLifePercent = 0.00f;
    this->m_fDeathLifePercent = 1.00f;
    this->m_fRoomClearedLifePercent = 1.00f;
    this->m_fVanishTotalTimer = 0.00f;
    this->m_bCanBeRevived = false;
    this->m_iTimeOfEndRevivable = 0;
    this->m_eDownState = EDownState::None;
    this->m_bCanShowDownScreen = true;
    this->m_bCanVanish = false;
    this->m_fTimeBeforeVanishActive = 0.00f;
    this->m_iTimeTickBeforeVanishActive = 0;
    this->m_bInCoopRevivedWait = false;
    this->m_iTimeRespawnNoDown = 0;
    this->m_bReviveInProgress = false;
    this->m_RecoveryRateByDangerState[0] = 0.00f;
    this->m_RecoveryRateByDangerState[1] = 0.00f;
    this->m_RecoveryRateByDangerState[2] = 0.00f;
}

void UHealthComponent::ServerSetInvicible_Implementation(bool _bIsInvicible) {
}
bool UHealthComponent::ServerSetInvicible_Validate(bool _bIsInvicible) {
    return true;
}

void UHealthComponent::ServerRequestReviveToken_Implementation(AActor* _reviveTarget, AActor* _requester, uint8 _uiReviveOrderID, bool _bCancel) {
}
bool UHealthComponent::ServerRequestReviveToken_Validate(AActor* _reviveTarget, AActor* _requester, uint8 _uiReviveOrderID, bool _bCancel) {
    return true;
}

void UHealthComponent::ServerNotifyVanish_Implementation() {
}
bool UHealthComponent::ServerNotifyVanish_Validate() {
    return true;
}

void UHealthComponent::ServerHackSetHealth_Implementation(float _fHealth) {
}
bool UHealthComponent::ServerHackSetHealth_Validate(float _fHealth) {
    return true;
}

void UHealthComponent::OnStatsChanged(EBonusType _eBonusType) {
}

void UHealthComponent::OnRepSetIsDown() {
}

void UHealthComponent::OnRepHitOrderPlayedForCurrentDeath() {
}

void UHealthComponent::OnRepCanShowDownScreen() {
}

void UHealthComponent::ClientRequestCancelRevive_Implementation(uint8 _uiReviveOrderID) {
}
bool UHealthComponent::ClientRequestCancelRevive_Validate(uint8 _uiReviveOrderID) {
    return true;
}

void UHealthComponent::BPF_ServerSetHealth_Implementation(float _fHealth) {
}
bool UHealthComponent::BPF_ServerSetHealth_Validate(float _fHealth) {
    return true;
}

void UHealthComponent::BPF_ServerAddHealth_Implementation(float _fHealth) {
}
bool UHealthComponent::BPF_ServerAddHealth_Validate(float _fHealth) {
    return true;
}

void UHealthComponent::BPF_ResetRecoveryCooldownFromValue(const float _fNewCooldownValue) {
}

void UHealthComponent::BPF_ResetRecoveryCooldown() {
}

float UHealthComponent::BPF_GetTimeRespawnNoDown() const {
    return 0.0f;
}

float UHealthComponent::BPF_GetTimeOfEndRevivable() const {
    return 0.0f;
}

float UHealthComponent::BPF_GetTimeBeforeVanishActive() const {
    return 0.0f;
}

float UHealthComponent::BPF_GetMaxHealth() const {
    return 0.0f;
}

float UHealthComponent::BPF_GetGhostDamage() {
    return 0.0f;
}

float UHealthComponent::BPF_GetBonusMaxHealth() const {
    return 0.0f;
}

float UHealthComponent::BPF_GetBaseMaxHealth() const {
    return 0.0f;
}

void UHealthComponent::BPF_ApplyDamage(float _fDamage, bool _bDeathDodger) {
}

void UHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHealthComponent, m_fHealth);
    DOREPLIFETIME(UHealthComponent, m_fGhostDamage);
    DOREPLIFETIME(UHealthComponent, m_bIsDown);
    DOREPLIFETIME(UHealthComponent, m_bHitOrderPlayedForCurrentDeath);
    DOREPLIFETIME(UHealthComponent, m_iTimeToEndRevive);
    DOREPLIFETIME(UHealthComponent, m_bCanBeRevived);
    DOREPLIFETIME(UHealthComponent, m_iTimeOfEndRevivable);
    DOREPLIFETIME(UHealthComponent, m_eDownState);
    DOREPLIFETIME(UHealthComponent, m_bCanShowDownScreen);
    DOREPLIFETIME(UHealthComponent, m_bCanVanish);
    DOREPLIFETIME(UHealthComponent, m_iTimeTickBeforeVanishActive);
    DOREPLIFETIME(UHealthComponent, m_bInCoopRevivedWait);
    DOREPLIFETIME(UHealthComponent, m_iTimeRespawnNoDown);
    DOREPLIFETIME(UHealthComponent, m_bReviveInProgress);
}


