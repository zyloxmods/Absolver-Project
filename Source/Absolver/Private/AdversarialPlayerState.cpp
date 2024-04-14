#include "AdversarialPlayerState.h"
#include "Net/UnrealNetwork.h"

AAdversarialPlayerState::AAdversarialPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_eLastAnswer = EGameModePlayerAnswers::None;
    this->m_bReadyToSkipCutscene = false;
    this->m_iNbMatchWon = 0;
}

void AAdversarialPlayerState::Server_SetReadyToLeaveCutscene_Implementation(bool _bReady) {
}
bool AAdversarialPlayerState::Server_SetReadyToLeaveCutscene_Validate(bool _bReady) {
    return true;
}

void AAdversarialPlayerState::Multicast_UpdateReadyToLeaveCutScene_Implementation(bool _bReady) {
}
bool AAdversarialPlayerState::Multicast_UpdateReadyToLeaveCutScene_Validate(bool _bReady) {
    return true;
}

int32 AAdversarialPlayerState::BPF_GetTotalKillCount() {
    return 0;
}

int32 AAdversarialPlayerState::BPF_GetMatchWon() const {
    return 0;
}

EEndGameResult AAdversarialPlayerState::BPF_GetMatchResult() {
    return EEndGameResult::Victory;
}

int32 AAdversarialPlayerState::BPF_GetKillsOnPlayer(AFightingPlayerState* _playerKilled) {
    return 0;
}

void AAdversarialPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAdversarialPlayerState, m_eLastAnswer);
    DOREPLIFETIME(AAdversarialPlayerState, m_bReadyToSkipCutscene);
    DOREPLIFETIME(AAdversarialPlayerState, m_Scores);
    DOREPLIFETIME(AAdversarialPlayerState, m_iNbMatchWon);
}


