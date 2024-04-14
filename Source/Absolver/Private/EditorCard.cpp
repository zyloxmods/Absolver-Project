#include "EditorCard.h"

UEditorCard::UEditorCard() {
    this->m_TimelineButton = NULL;
    this->m_ComboEditorData = NULL;
    this->m_fDamageGaugePercentage = 0.00f;
    this->m_fSpeedGaugePercentage = 0.00f;
    this->m_fRangeGaugePercentage = 0.00f;
    this->m_eInterruptAttackVisibility = ESlateVisibility::Collapsed;
    this->m_eGuardBreakVisibility = ESlateVisibility::Collapsed;
    this->m_eAvoidVisibility = ESlateVisibility::Collapsed;
    this->m_AvoidPicto = NULL;
    this->m_eParryVisibility = ESlateVisibility::Collapsed;
    this->m_ParryPicto = NULL;
    this->m_eAbsorbVisibility = ESlateVisibility::Collapsed;
    this->m_eNoPropertyVisibility = ESlateVisibility::Visible;
    this->m_AltAttackName = FText::FromString(TEXT("Invalid"));
    this->m_fDamageComparisonPercentage = 0.00f;
    this->m_fSpeedComparisonPercentage = 0.00f;
    this->m_fRangeComparisonPercentage = 0.00f;
    this->m_uiAvoidType = EAvoidType::Duck;
    this->m_uiParrySide = EParrySide::Left;
    this->m_StanceTextures[0] = NULL;
    this->m_StanceTextures[1] = NULL;
    this->m_StanceTextures[2] = NULL;
    this->m_StanceTextures[3] = NULL;
    this->m_QuadrantTextures[0] = NULL;
    this->m_QuadrantTextures[1] = NULL;
    this->m_QuadrantTextures[2] = NULL;
    this->m_QuadrantTextures[3] = NULL;
}

void UEditorCard::OnButtonUnFocused(USCButton* _button) {
}

void UEditorCard::OnButtonFocused(USCButton* _button) {
}

void UEditorCard::BPF_UpdateDeckStructFromAttack(const FAttackDataRow& _AttackData, bool _bIsAttackMirror, const EStatsAppliedMode _eStatsMode) {
}

void UEditorCard::BPF_SetAttackFromName(FName _AttackName, bool _bIsMirror) {
}

void UEditorCard::BPF_OnButtonClicked() {
}

bool UEditorCard::BPF_IsCardError() {
    return false;
}

bool UEditorCard::BPF_IsAttackSet() const {
    return false;
}

UTexture2D* UEditorCard::BPF_GetStanceTexture(EQuadrantTypes _eQuadrant) {
    return NULL;
}

UTexture2D* UEditorCard::BPF_GetQuadrantTexture(EQuadrantTypes _eQuadrant) {
    return NULL;
}

EQuadrantTypes UEditorCard::BPF_GetQuadrant() {
    return EQuadrantTypes::FrontLeft;
}

void UEditorCard::BPF_GetPreviewAttackData(FAttackDataRow& _dataRow) {
}

FText UEditorCard::BPF_GetFightingStyleName(int32 _iStyle) {
    return FText::GetEmpty();
}

void UEditorCard::BPF_GetDeckStructForStatsMode(const EStatsAppliedMode _eStatsMode, FCombatDeckDetails& _outDeckDetails) const {
}

void UEditorCard::BPF_GetCurrentAttackData(FAttackDataRow& _outAttackData) {
}

int32 UEditorCard::BPF_GetCardIndex() const {
    return 0;
}

EQuadrantTypes UEditorCard::BPF_GetAttackStartQuadrant(bool _bMirror) {
    return EQuadrantTypes::FrontLeft;
}

EQuadrantTypes UEditorCard::BPF_GetAttackEndQuadrant(bool _bMirror) {
    return EQuadrantTypes::FrontLeft;
}

















