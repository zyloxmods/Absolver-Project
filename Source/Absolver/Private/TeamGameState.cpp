#include "TeamGameState.h"
#include "Net/UnrealNetwork.h"

ATeamGameState::ATeamGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fCurrentMatchTimeLeft = 0.00f;
    this->m_iScoreLimit = 0;
    this->m_iAlmostWinScore = 4000;
    this->m_iTimeOfEnd = 0;
    this->m_fTotalMatchTime = 600.00f;
    this->m_bExtraTime = false;
}

void ATeamGameState::ResetForMatch_Implementation() {
}

void ATeamGameState::OnRepTeamScore() {
}

void ATeamGameState::OnRepScoreLimit() {
}

void ATeamGameState::OnRepNumTeam() {
}

void ATeamGameState::OnRepExtraTime() {
}

void ATeamGameState::MulticastResetForNewMatch_Implementation() {
}

void ATeamGameState::MulticastEndMatch_Implementation() {
}

bool ATeamGameState::BPF_IsInExtraTime() const {
    return false;
}

int32 ATeamGameState::BPF_GetScoreLimit() {
    return 0;
}

float ATeamGameState::BPF_GetMatchTimeLeft() const {
    return 0.0f;
}

int32 ATeamGameState::BPF_GetAlmostWinScore() {
    return 0;
}

void ATeamGameState::BPF_AddScoreToTeam(uint8 _uiTeamID, float _fScore) {
}

void ATeamGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATeamGameState, m_TeamScore);
    DOREPLIFETIME(ATeamGameState, m_iScoreLimit);
    DOREPLIFETIME(ATeamGameState, m_iTimeOfEnd);
    DOREPLIFETIME(ATeamGameState, m_fTotalMatchTime);
    DOREPLIFETIME(ATeamGameState, m_bExtraTime);
}


