#include "StartUpMenu.h"

UStartUpMenu::UStartUpMenu() {
    this->bAlreadyStarted = false;
    this->m_eCurrentState = EStartupMenuState::IIS;
}

void UStartUpMenu::OnSessionStateChanged(FName _previous, FName _current) {
}

void UStartUpMenu::OnSaveLoaded(USaveThePlaines* LoadingResult, bool bLoadingSucessfull) {
}

void UStartUpMenu::OnProfileLoaded() {
}

void UStartUpMenu::OnPlayTogetherStarted() {
}

void UStartUpMenu::OnPlayTogetherEnded(bool _bSuccess, FText _error) {
}

void UStartUpMenu::OnOnlineStatusChanged(ESCOnlineStatus NewStatus, bool _bInInvitation) {
}

void UStartUpMenu::OnJoinCoopSessionByInvitationStarted() {
}

void UStartUpMenu::OnJoinCoopSessionByInvitationCompleted(bool _bSuccess, FText _error) {
}

void UStartUpMenu::OnFetchedMentoringInfos(bool _bResult, FText _error) {
}

void UStartUpMenu::OnConnectionRetryYes() {
}

void UStartUpMenu::OnConnectionRetryNo() {
}

void UStartUpMenu::BPF_SetOnlineOption(bool _bIsOnline) {
}

void UStartUpMenu::BPF_PreloadCharacter() {
}

void UStartUpMenu::BPF_OnSaveLoaded(USaveThePlaines* LoadingResult, bool bLoadingSucessfull) {
}

void UStartUpMenu::BPF_NavigationBackClicked() {
}

bool UStartUpMenu::BPF_CanLoadGame() {
    return false;
}











