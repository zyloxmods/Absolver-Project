#include "InputMappingWidget.h"

UInputMappingWidget::UInputMappingWidget() {
    this->m_bIsMappingFieldForAxis = false;
    this->m_bForceDisplayAsSingleField = false;
    this->m_bCheckDuplicateKey = true;
    this->m_eSelectedFieldScaleType = EMappableFieldScaleTypes::PositiveScale;
    this->m_eFocusedFieldScaleType = EMappableFieldScaleTypes::None;
    this->m_eRemappingAllowedType = ERemappingAllowedInputTypes::Both;
}

void UInputMappingWidget::BPF_WaitingKeyInput(EMappableFieldScaleTypes _eScaleType) {
}

void UInputMappingWidget::BPF_SetRemappingButton(UButtonUserWidget* _remappingButton, EMappableFieldScaleTypes _eScaleType) {
}

void UInputMappingWidget::BPF_OnRemappingFieldGettingFocusLost(EMappableFieldScaleTypes _eScaleType) {
}

void UInputMappingWidget::BPF_OnRemappingFieldGettingFocused(EMappableFieldScaleTypes _eScaleType) {
}

FName UInputMappingWidget::BPF_GetActionName() {
    return NAME_None;
}





