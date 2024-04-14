#include "ComboMiniCard.h"

UComboMiniCard::UComboMiniCard() {
    this->m_eWarningVisibility = ESlateVisibility::Hidden;
    this->m_eInterruptAttackVisibility = ESlateVisibility::Collapsed;
    this->m_eGuardBreakVisibility = ESlateVisibility::Collapsed;
    this->m_eAvoidVisibility = ESlateVisibility::Collapsed;
    this->m_AvoidPicto = NULL;
    this->m_eParryVisibility = ESlateVisibility::Collapsed;
    this->m_ParryPicto = NULL;
    this->m_eAbsorbVisibility = ESlateVisibility::Collapsed;
    this->m_eNoSpecialVisibility = ESlateVisibility::Collapsed;
    this->m_ComboWidgetData = NULL;
    this->m_ComboEditorData = NULL;
    this->m_iQuadrantThrough = -1;
    this->m_fAttackPercentage = 0.00f;
    this->m_AttackPicto = NULL;
    this->m_FillingCurve = NULL;
    this->m_bShowAttackPicto = false;
    this->m_bShowSpecialProperty = true;
}

void UComboMiniCard::LoadAttackPicto() {
}

void UComboMiniCard::BPF_UpdateParameters(const FAttackDataRow& _AttackData, bool _bMirror) {
}

void UComboMiniCard::BPF_SetComboWidgetData(UComboWidgetData* _data) {
}

void UComboMiniCard::BPF_SetAttackInProgress(bool _bInProgress) {
}

EQuadrantTypes UComboMiniCard::BPF_GetAssignedQuadrant(const FAttackDataRow& _AttackData) {
    return EQuadrantTypes::FrontLeft;
}

void UComboMiniCard::BPF_CollapseAllAttackPropertiesImages() {
}







