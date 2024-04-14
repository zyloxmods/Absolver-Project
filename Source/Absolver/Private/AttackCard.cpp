#include "AttackCard.h"

UAttackCard::UAttackCard() {
    this->m_InterruptAttackPicto = NULL;
    this->m_eInterruptAttackVisibility = ESlateVisibility::Collapsed;
    this->m_GuardBreakPicto = NULL;
    this->m_eGuardBreakVisibility = ESlateVisibility::Collapsed;
    this->m_eAvoidVisibility = ESlateVisibility::Collapsed;
    this->m_AvoidText = FText::FromString(TEXT("Invalid"));
    this->m_AvoidPicto = NULL;
    this->m_eParryVisibility = ESlateVisibility::Collapsed;
    this->m_ParryText = FText::FromString(TEXT("Invalid"));
    this->m_ParryPicto = NULL;
    this->m_AbsorbPicto = NULL;
    this->m_eAbsorbVisibility = ESlateVisibility::Collapsed;
    this->m_Card = NULL;
    this->m_ComboEditorData = NULL;
}

EQuadrantTypes UAttackCard::GetStartQuadrant(int32 _iAttackIndex) {
    return EQuadrantTypes::FrontLeft;
}

UComboEditor* UAttackCard::GetComboEditor() {
    return NULL;
}

EComboAttackValidationStates UAttackCard::BPF_ValidateComboAttack(int32 _iAttackIndex) {
    return EComboAttackValidationStates::Success;
}

bool UAttackCard::BPF_IsAltAttack() const {
    return false;
}

int32 UAttackCard::BPF_GetComboAttackIndex() const {
    return 0;
}

void UAttackCard::BPF_GetComboAttackData(int32 _iAttackIndex, bool& _out_bIsEmpty, FAttackDataRow& _out_dataRow, bool& _out_bIsMirror, bool& _out_bIsLocked) {
}

int32 UAttackCard::BPF_GetComboAttackCount() const {
    return 0;
}




