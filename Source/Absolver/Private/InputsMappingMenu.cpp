#include "InputsMappingMenu.h"

UInputsMappingMenu::UInputsMappingMenu() {
    this->m_MappableInputsDB = NULL;
    this->m_InputMappingWidgetClass = NULL;
    this->m_bIsRemappingOccured = false;
}

void UInputsMappingMenu::OnRemappingStarted(FName _ActionName, EMappableFieldScaleTypes _eScaleType) {
}

void UInputsMappingMenu::OnRemappingFieldFocusLost(FName _ActionName, EMappableFieldScaleTypes _ScaleType) {
}

void UInputsMappingMenu::OnRemappingFieldFocused(FName _ActionName, EMappableFieldScaleTypes _ScaleType) {
}

void UInputsMappingMenu::OnGamepadControllerTypeChanged(FName _gamepadControllerType) {
}

void UInputsMappingMenu::BPF_UpdateRemappingKeyList() {
}

void UInputsMappingMenu::BPF_UpdateMappingListKeyIcons() {
}

void UInputsMappingMenu::BPF_RestoreDefaultMapping() {
}

bool UInputsMappingMenu::BPF_RemoveMapping(FName _ActionName) {
    return false;
}

bool UInputsMappingMenu::BPF_PerformKeyRemapping(FName _ActionName, FInputKeyMappingHandler _NewKeyMapping) {
    return false;
}

bool UInputsMappingMenu::BPF_IsWaitingInputForRemapping() {
    return false;
}

FText UInputsMappingMenu::BPF_GetRemappingFailMessage(ERemappingFinishedStates _finishState) {
    return FText::GetEmpty();
}

void UInputsMappingMenu::BPF_FillRemappingKeyList(UPanelWidget* _KeyContainer, ERemappingAllowedInputTypes _eRemappingAllowedInputTypes, UButtonUserWidget* _LastRemappingFieldNextButton) {
}

void UInputsMappingMenu::BPF_Cancel() {
}

void UInputsMappingMenu::BPF_BuildRemappingListOuterNavigation(UButtonUserWidget* _LastRemappingFieldNextButton) {
}

void UInputsMappingMenu::BPF_BuildRemappingFieldsListExplicitNavigation(UButtonUserWidget* _LastRemappingFieldNextButton) {
}

void UInputsMappingMenu::BPF_ApplyMapping(ERemappingAllowedInputTypes _eRemappingInputTypeToApply) {
}








