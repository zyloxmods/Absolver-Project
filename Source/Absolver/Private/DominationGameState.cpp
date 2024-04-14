#include "DominationGameState.h"
#include "Net/UnrealNetwork.h"

ADominationGameState::ADominationGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bFirstWaveDone = false;
}

void ADominationGameState::ResetRoundInfo() {
}

FDominationRoundInfo ADominationGameState::GetRoundInfo() {
    return FDominationRoundInfo{};
}

void ADominationGameState::BPF_SetFirstWaveDone(bool _bDone) {
}

bool ADominationGameState::BPF_IsFirstWaveDone() const {
    return false;
}

int32 ADominationGameState::BPF_GetNumActiveZone_Implementation() {
    return 0;
}


void ADominationGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADominationGameState, m_bFirstWaveDone);
    DOREPLIFETIME(ADominationGameState, m_TimerNewAreaActivation);
    DOREPLIFETIME(ADominationGameState, m_RoundInfo);
}


