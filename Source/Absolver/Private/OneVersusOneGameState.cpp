#include "OneVersusOneGameState.h"
#include "Net/UnrealNetwork.h"

AOneVersusOneGameState::AOneVersusOneGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AOneVersusOneGameState::OnRep_SetCacheMatchState() {
}

bool AOneVersusOneGameState::BPF_IsAFriendlyMatch() const {
    return false;
}

void AOneVersusOneGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOneVersusOneGameState, m_RoundInfos);
}


