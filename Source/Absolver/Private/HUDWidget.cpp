#include "HUDWidget.h"

UHUDWidget::UHUDWidget() {
    this->m_eCurrentQuadrant = EQuadrantTypes::None;
    this->m_MiniMovesetData = NULL;
}

void UHUDWidget::OnRegularAttack(EQuadrantTypes _eStartQuadrant, EQuadrantTypes _eEndQuadrant, uint8 _uiNewIndex) {
}

void UHUDWidget::OnComboEnd(EQuadrantTypes _eNewQuadrant) {
}

void UHUDWidget::OnComboChangeQuadrant(EQuadrantTypes _eNewQuadrant) {
}

void UHUDWidget::OnComboChangeNextImg(EQuadrantTypes _eNewQuadrant) {
}

void UHUDWidget::OnChangeQuadrantState(EQuadrantTypes _eNewQuadrant) {
}

void UHUDWidget::OnAltAttack(EQuadrantTypes _eNewQuadrant, uint8 _uiCurrentComboIndex) {
}

void UHUDWidget::BPF_RebuildAllQuadrants() {
}

bool UHUDWidget::BPF_IsAttacking() const {
    return false;
}











