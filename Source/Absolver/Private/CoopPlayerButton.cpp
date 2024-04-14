#include "CoopPlayerButton.h"

UCoopPlayerButton::UCoopPlayerButton() {
    this->m_eGameModeAnswer = ECoopGameModeAnswerStatus::None;
    this->m_bAllies = true;
    this->m_eGameModeType = EGameModeTypes::None;
    this->m_eCoopUserDisplayType = ECoopUserDisplayType::None;
    this->m_iCoopIndex = 0;
}

void UCoopPlayerButton::BPF_SetGameModeType(EGameModeTypes _eGameMode) {
}

bool UCoopPlayerButton::BPF_GetIsConnecting() {
    return false;
}

float UCoopPlayerButton::BPF_GetHealth() {
    return 0.0f;
}

AActor* UCoopPlayerButton::BPF_GetActor() {
    return NULL;
}


