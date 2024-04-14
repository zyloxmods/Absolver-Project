#include "AdversarialHUDTeamWidget.h"

UAdversarialHUDTeamWidget::UAdversarialHUDTeamWidget() {
    this->m_bCurrentPlayerTeam = true;
    this->m_iTeamIndex = 0;
    this->m_fScore = 0;
    this->m_bExists = false;
}

int32 UAdversarialHUDTeamWidget::BPF_GetTeam() {
    return 0;
}

AAdversarialGameState* UAdversarialHUDTeamWidget::BPF_GetGameState() {
    return NULL;
}


