#include "AdversarialHUDPlayerWidget.h"

UAdversarialHUDPlayerWidget::UAdversarialHUDPlayerWidget() {
    this->m_iPlayerIndex = 0;
    this->m_bCurrentPlayer = true;
    this->m_bCurrentPlayerTeam = true;
    this->m_iTeamIndex = 0;
    this->m_iKillsCount = -1;
    this->m_iLevel = -1;
    this->m_bExists = false;
    this->m_fDisappearDelay = 4.00f;
    this->m_eLastAnswer = EGameModePlayerAnswers::None;
}

bool UAdversarialHUDPlayerWidget::BPF_IsCurrentPlayerTeam() {
    return false;
}

bool UAdversarialHUDPlayerWidget::BPF_IsCurrentPlayer() {
    return false;
}

AAdversarialPlayerState* UAdversarialHUDPlayerWidget::BPF_GetPlayerState() {
    return NULL;
}

AFightingCharacter* UAdversarialHUDPlayerWidget::BPF_GetCharacter() {
    return NULL;
}


