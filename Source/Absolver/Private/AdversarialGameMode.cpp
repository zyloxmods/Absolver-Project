#include "AdversarialGameMode.h"

AAdversarialGameMode::AAdversarialGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_iNumTeams = 2;
    this->m_iNumPlayersPerTeam = 1;
    this->m_iNbWinningRounds = 0;
    this->m_bEveryDeathIsAKill = false;
    this->m_bHasIntro = true;
    this->m_bAutoRematch = true;
    this->m_RematchMethod = ERematchMethod::WinnerAndLoser;
    this->m_fStartTimer = 4.00f;
    this->m_fRematchTimer = 10.00f;
}

void AAdversarialGameMode::ForceStartMatch() {
}

void AAdversarialGameMode::BPF_SetWinners(const TArray<AController*>& _controllers) {
}

TArray<AController*> AAdversarialGameMode::BPF_GetWinners() {
    return TArray<AController*>();
}

int32 AAdversarialGameMode::BPF_GetNumberOfTeams() const {
    return 0;
}

int32 AAdversarialGameMode::BPF_GetNumberOfPlayersPerTeam() const {
    return 0;
}

AAdversarialGameState* AAdversarialGameMode::BPF_GetAdversarialGameState() {
    return NULL;
}

AController* AAdversarialGameMode::BPF_ComputeDefaultKiller_Implementation(AController* _killedPlayer) {
    return NULL;
}



int32 AAdversarialGameMode::BPE_GetWinningTeamID_Implementation() {
    return 0;
}


int32 AAdversarialGameMode::BPE_GetPvPPoints_Implementation() {
    return 0;
}


