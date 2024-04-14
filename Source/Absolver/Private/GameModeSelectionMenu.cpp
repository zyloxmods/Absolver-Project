#include "GameModeSelectionMenu.h"

UGameModeSelectionMenu::UGameModeSelectionMenu() {
    this->m_eGameModeType = EGameModeTypes::None;
    this->m_iNbPlayersMax = 0;
    this->m_iNbCurrentPlayersReady = 0;
    this->m_bCanLaunchCoopGameMode = false;
    this->m_bCanAskForCoopGameMode = false;
    this->m_bCanJoinGameMode = false;
}

void UGameModeSelectionMenu::BPF_SetGameModeType(EGameModeTypes _eGameModeType) {
}

void UGameModeSelectionMenu::BPF_SendGameModeRequestToCoopGroup(EGameModeTypes _eGameModeType) {
}

void UGameModeSelectionMenu::BPF_SendGameModeRequestCancel(EGameModeTypes _eGameModeType) {
}

void UGameModeSelectionMenu::BPF_SendGameModeAnswerValidateToLeader(EGameModeTypes _eGameModeType, bool _bAccept) {
}

void UGameModeSelectionMenu::BPF_RefreshCoopGameModeStatus() {
}

void UGameModeSelectionMenu::BPF_PrepareCoopGameMode() {
}

bool UGameModeSelectionMenu::BPF_IsReadyForCoopGameMode(EGameModeTypes _eGameModeType) {
    return false;
}

bool UGameModeSelectionMenu::BPF_IsPendingOneCoopGameModeInvitation(bool _bIncludeCurrentMode) {
    return false;
}

bool UGameModeSelectionMenu::BPF_IsPendingCoopGameModeInvitation(EGameModeTypes _eGameModeType) {
    return false;
}

bool UGameModeSelectionMenu::BPF_IsLeader(EGameModeTypes _eGameModeType) {
    return false;
}

void UGameModeSelectionMenu::BPF_CancelPendingCoopGameModeInvitations(bool _bCancelCurrentMode) {
}







