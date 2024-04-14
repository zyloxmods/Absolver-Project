#include "StatueWaveSpawner.h"
#include "Net/UnrealNetwork.h"

AStatueWaveSpawner::AStatueWaveSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fWaveActivationDelay = 5.00f;
    this->m_bTimerStarted = false;
    this->m_bWaveLaunched = false;
    this->m_fChangeTargetThreshMin = 10.00f;
    this->m_fChangeTargetThreshMax = 20.00f;
}

void AStatueWaveSpawner::OnRep_TimerStarted() {
}

void AStatueWaveSpawner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStatueWaveSpawner, m_bTimerStarted);
    DOREPLIFETIME(AStatueWaveSpawner, m_bWaveLaunched);
}


