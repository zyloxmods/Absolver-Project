#include "HitComponent.h"
#include "Net/UnrealNetwork.h"

UHitComponent::UHitComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->m_Curve = NULL;
    this->m_fHitStrength = 100.00f;
    this->m_DefaultKnockBackDynamic = NULL;
    this->m_fHittedTrackingDuration = 0.00f;
    this->m_HittedDB = NULL;
    this->m_fDisarmGauge = 1.00f;
    this->m_fGuardDisarmCoef = 0.50f;
    this->m_fBrokenGuardDisarmCoef = 1.50f;
    this->m_fDisarmGaugeRegenRate = 0.03f;
    this->m_fDisarmGaugeRegenRateWhileHoldingWeapon = 0.00f;
    this->m_bSteadyHand = false;
}

void UHitComponent::OnDangerStateChangedCallback(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState) {
}

void UHitComponent::MulticastNotifyResilienceImpact_Implementation(int64 _iTimeToLaunch, AActor* _DamageInstigator, FName _AttackName, FVector _ImpactPositionOnHitCapsule, FVector _ImpactDir, bool _IsGuarding, float _Damage, bool _AbsorbBroken, bool _bIsPerfectLink, EHeight _ImpactHeight, ECardinalPoints _ImpactCardinalPoint, bool _bLethal, uint8 _uiHitNb, float _fSpecialDamageRatio, EImpactType _eImpactType) {
}

void UHitComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHitComponent, m_fDisarmGauge);
    DOREPLIFETIME(UHitComponent, m_DamageDealtInfos);
}


