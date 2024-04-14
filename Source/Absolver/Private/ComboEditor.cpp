#include "ComboEditor.h"

UComboEditor::UComboEditor() {
    this->m_eRemoveNextAttackTextVisibility = ESlateVisibility::Hidden;
    this->m_ScrollBox = NULL;
    this->m_AttackDetails = NULL;
    this->m_ValidationWindow = NULL;
    this->m_MiniMoveset = NULL;
    this->m_eRemoveCurrentAttackTextVisibility = ESlateVisibility::Collapsed;
    this->m_ComboEditorData = NULL;
    this->m_QuadrantDisplayed = NULL;
    this->m_FLNbAttacks = FText::FromString(TEXT("0"));
    this->m_FRNbAttacks = FText::FromString(TEXT("0"));
    this->m_BRNbAttacks = FText::FromString(TEXT("0"));
    this->m_BLNbAttacks = FText::FromString(TEXT("0"));
    this->m_DefaultTexture = NULL;
    this->m_ScrollWidget = NULL;
    this->m_bShowEmptyComboNodes = false;
    this->m_eScrollBoxSortingMethod = EAttackSortingMethods::Damage;
    this->m_uiMaxChildrenNumberInScrollBoxHBox = 3;
    this->m_ScrollWidgetLine = NULL;
}

void UComboEditor::SortScrollBox(EAttackSortingMethods _sortingType) {
}

void UComboEditor::ShowScrollListWithFocusedCard() {
}

void UComboEditor::SetWantedQuadrant(EQuadrantTypes _eWantedQuadrant) const {
}

void UComboEditor::RemoveSelectedAttack() {
}

void UComboEditor::OnOpenStanceEdition() {
}

EQuadrantTypes UComboEditor::GetWantedQuadrant() {
    return EQuadrantTypes::FrontLeft;
}

EQuadrantTypes UComboEditor::GetQuadrantFocused() {
    return EQuadrantTypes::FrontLeft;
}

void UComboEditor::GetCurrentQuadrantAndFocusedCardIndex(EQuadrantTypes& _eOutCurrentQuad, int8& _iOutCardIndex) {
}

EQuadrantTypes UComboEditor::GetCurrentQuadrant() const {
    return EQuadrantTypes::FrontLeft;
}

void UComboEditor::CloseComboScroll(UEditorCard* _card) {
}

void UComboEditor::ChangeAndRefreshQuadrant() {
}

void UComboEditor::BPF_UpdatePreviewCombo(EQuadrantTypes _eWantedQuadrant, int32 _iAttackIndex, const FName& _previewAttack) {
}

void UComboEditor::BPF_SetWeaponFamily(EWeaponFamilies _eWeaponFamily) {
}

void UComboEditor::BPF_SetState(EComboEditorState _eState) {
}

void UComboEditor::BPF_ResetPreviewCombo() {
}

void UComboEditor::BPF_ResetFocusOnCard(UEditorCard* _card) {
}

void UComboEditor::BPF_RequestTraining() {
}

void UComboEditor::BPF_RequestStanceEdition() {
}

void UComboEditor::BPF_RequestCancel() {
}

void UComboEditor::BPF_RemoveNextAttack() {
}

void UComboEditor::BPF_RefreshMiniMoveset() {
}

void UComboEditor::BPF_OnCloseAttackReplacement() {
}

void UComboEditor::BPF_OnClose() {
}

bool UComboEditor::BPF_IsFocusedCardAttackSet() {
    return false;
}

void UComboEditor::BPF_InitMoveSetTutorialWithList(const TArray<UWidget*>& _widgetList) {
}

void UComboEditor::BPF_InitMoveSetTutorial() {
}

EWeaponFamilies UComboEditor::BPF_GetWeaponFamily() {
    return EWeaponFamilies::BareHands;
}

EComboEditorState UComboEditor::BPF_GetState() {
    return EComboEditorState::StanceSelection;
}

UEditorCard* UComboEditor::BPF_GetFocusedCard() {
    return NULL;
}

void UComboEditor::BPF_FindAndSetFocusedCard() {
}

void UComboEditor::BPF_ExitStanceEdition() {
}

void UComboEditor::BPF_ChosenAttackValidation() {
}




















