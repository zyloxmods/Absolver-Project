#include "Breakable.h"
#include "Net/UnrealNetwork.h"

ABreakable::ABreakable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bIsActivated = true;
    this->m_fMaxGleams = 0.00f;
    this->m_fAliveBonusGleams = 0.00f;
    this->m_bIsStatue = false;
}

void ABreakable::OnRep_Activated() {
}

void ABreakable::Deactivate() {
}

void ABreakable::BPF_SendHealthToHUD() {
}

float ABreakable::BPF_GetMaxGleams() const {
    return 0.0f;
}

float ABreakable::BPF_GetAliveBonusGleams() const {
    return 0.0f;
}



void ABreakable::Activate() {
}

void ABreakable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABreakable, m_bIsActivated);
}


