#include "ControllerButtonWidget.h"

UControllerButtonWidget::UControllerButtonWidget() {
    this->m_eAxisType = EControllerIconAxisTypes::HorizontalAndVertical;
    this->m_IconStyle = EControllerIconStyles::Small;
    this->m_eAction = InputAction::None;
}

void UControllerButtonWidget::BPF_SetInputDatas(TArray<UGenericInputData*> _InputDatas) {
}

void UControllerButtonWidget::BPF_SetInputData(UGenericInputData* _InputData) {
}

void UControllerButtonWidget::BPF_SetAxisType(EControllerIconAxisTypes _eAxisType) {
}

void UControllerButtonWidget::BPF_SetAction(InputAction _eAction) {
}

bool UControllerButtonWidget::BPF_IsKeyboardInput() {
    return false;
}

FText UControllerButtonWidget::BPF_GetKeyDisplayName(const FKey& _key) {
    return FText::GetEmpty();
}

FKey UControllerButtonWidget::BPF_GetKeyboardKey(bool& _bOutIsValid) {
    return FKey{};
}

TSoftObjectPtr<UTexture2D> UControllerButtonWidget::BPF_GetIcon(bool& _bFound, FText& _replacementText, bool& _bShowText) {
    return NULL;
}


