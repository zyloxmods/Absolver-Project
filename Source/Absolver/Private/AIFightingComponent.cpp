#include "AIFightingComponent.h"
#include "Net/UnrealNetwork.h"

UAIFightingComponent::UAIFightingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->m_iCurrentPhase = 0;
    this->m_fChainedDodgeDelay = 1.00f;
    this->m_fCancelDelayForParry = 0.20f;
    this->m_fLateralDodgeAngle = 75.00f;
    this->m_fLowStaminaRatioMin = 0.15f;
    this->m_fLowStaminaRatioMax = 0.45f;
    this->m_fMemoryValidity = 10.00f;
    this->m_fPickupMaxDist = 500.00f;
    this->m_fThreatMinDistForPickup = 150.00f;
    this->m_fAlertPropagationDistance = 1000.00f;
    this->m_uiIdleIndex = 255;
    this->m_bAlertedOnce = false;
    this->m_uiWeightLevel = 0;
    this->m_uiAlertedIdle = 255;
    this->m_iCurrentLevel = 0;
}

void UAIFightingComponent::OnWeaponFamilyChanged(const EWeaponFamilies _eNewWeaponFamily, const EStatsAppliedMode _eStatsAppliedMode) {
}

void UAIFightingComponent::OnRep_Spawner() {
}

void UAIFightingComponent::OnRep_Idle() {
}

void UAIFightingComponent::OnRep_Archetype() {
}

void UAIFightingComponent::Multicast_DeathDetected_Implementation() {
}

void UAIFightingComponent::HitDetection(FHitDescription _hitDescription) {
}

void UAIFightingComponent::BPF_SwitchToPhase(int32 _iPhase) {
}

int32 UAIFightingComponent::BPF_GetXPBonus() {
    return 0;
}

void UAIFightingComponent::BPF_ForceEnemy(AActor* _enemy) {
}

void UAIFightingComponent::BeforeGhostDamagesReset() {
}

void UAIFightingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAIFightingComponent, m_uiIdleIndex);
    DOREPLIFETIME(UAIFightingComponent, m_bAlertedOnce);
    DOREPLIFETIME(UAIFightingComponent, m_uiWeightLevel);
    DOREPLIFETIME(UAIFightingComponent, m_uiAlertedIdle);
    DOREPLIFETIME(UAIFightingComponent, m_iCurrentLevel);
}


