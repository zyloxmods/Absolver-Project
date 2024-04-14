#include "AdversarialGameState.h"
#include "Net/UnrealNetwork.h"

AAdversarialGameState::AAdversarialGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bShouldGiveXPOnKill = false;
    this->m_iNbWinningRounds = 0;
    this->m_bMatchValidity = false;
    this->m_iRematchCount = 0;
    this->m_uiMatchID = 0;
    this->m_iWinnerTeamIndex = -1;
    this->m_bReadyToEndMatch = false;
    this->m_eEndGameReason = EMatchEndReason::None;
    this->m_bCanEndMatch = true;
    this->m_bCountDownOver = false;
    this->m_uiNbExpectedPlayers = 2;
    this->m_uiNbConnectedPlayerCount = 2;
    this->m_bWinnerComputed = false;
    this->m_fRewardScreenDuration = 30.00f;
    this->m_fEndMatchDuration = 3.00f;
    this->m_fDelayBeforeHidingCharactersAtEnd = 0.00f;
    this->m_bCanSkipIntro = false;
    this->m_bMatchInProgressOnce = false;
    this->m_bMatchFull = false;
    this->m_bAskForRematchMaking = false;
    this->m_bPvPReadyAtEnd = false;
}

void AAdversarialGameState::OnRep_WinnerTeamIndex() {
}

void AAdversarialGameState::OnRep_SetNbConnectedPlayerCount() {
}

void AAdversarialGameState::OnRep_SetMatchValidity() {
}

void AAdversarialGameState::OnRep_SetMatchInProgress() {
}

void AAdversarialGameState::OnRep_SetMatchFull() {
}

void AAdversarialGameState::OnRep_SetCountDownIsOver() {
}

void AAdversarialGameState::OnRep_SetCacheMatchState() {
}

void AAdversarialGameState::OnRep_SetAskForRematchMaking() {
}

void AAdversarialGameState::MulticastSetMatchInProgress_Implementation(bool _bInProgress) {
}

void AAdversarialGameState::BPF_SetReadyToEndMatch(bool _bReadyToEndMatch) {
}

bool AAdversarialGameState::BPF_IsMatchFull() {
    return false;
}

bool AAdversarialGameState::BPF_IsAFriendlyMatch() const {
    return false;
}

int32 AAdversarialGameState::BPF_GetWinnerTeamIndex() {
    return 0;
}

int32 AAdversarialGameState::BPF_GetTeamScore(uint8 _uiTeamIndex) {
    return 0;
}

int32 AAdversarialGameState::BPF_GetPlayerIndexInTeam(AAdversarialPlayerState* _player) {
    return 0;
}

AAdversarialPlayerState* AAdversarialGameState::BPF_GetPlayer(int32 _iTeam, int32 _iPlayerIndex) {
    return NULL;
}

uint8 AAdversarialGameState::BPF_GetConnectedPlayerCount() const {
    return 0;
}

FName AAdversarialGameState::BPF_GetCachedMatchState() const {
    return NAME_None;
}




bool AAdversarialGameState::BFP_GetMatchValidity() {
    return false;
}

void AAdversarialGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAdversarialGameState, m_iNbWinningRounds);
    DOREPLIFETIME(AAdversarialGameState, m_bMatchValidity);
    DOREPLIFETIME(AAdversarialGameState, m_iRematchCount);
    DOREPLIFETIME(AAdversarialGameState, m_uiMatchID);
    DOREPLIFETIME(AAdversarialGameState, m_iWinnerTeamIndex);
    DOREPLIFETIME(AAdversarialGameState, m_bReadyToEndMatch);
    DOREPLIFETIME(AAdversarialGameState, m_eEndGameReason);
    DOREPLIFETIME(AAdversarialGameState, m_bCanEndMatch);
    DOREPLIFETIME(AAdversarialGameState, m_Winners);
    DOREPLIFETIME(AAdversarialGameState, m_bCountDownOver);
    DOREPLIFETIME(AAdversarialGameState, m_CacheMatchState);
    DOREPLIFETIME(AAdversarialGameState, m_uiNbExpectedPlayers);
    DOREPLIFETIME(AAdversarialGameState, m_uiNbConnectedPlayerCount);
    DOREPLIFETIME(AAdversarialGameState, m_bWinnerComputed);
    DOREPLIFETIME(AAdversarialGameState, m_bMatchInProgressOnce);
    DOREPLIFETIME(AAdversarialGameState, m_bMatchFull);
    DOREPLIFETIME(AAdversarialGameState, m_bAskForRematchMaking);
    DOREPLIFETIME(AAdversarialGameState, m_bPvPReadyAtEnd);
}


