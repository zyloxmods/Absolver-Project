#include "CombatDeckFamilyWidget.h"

UCombatDeckFamilyWidget::UCombatDeckFamilyWidget() {
    this->m_Icon = NULL;
    this->m_WeaponFamily = EWeaponFamilies::BareHands;
}

void UCombatDeckFamilyWidget::OnButtonFocusLost(USCButton* _button) {
}

void UCombatDeckFamilyWidget::OnButtonFocused(USCButton* _button) {
}

void UCombatDeckFamilyWidget::OnButtonClicked() {
}

void UCombatDeckFamilyWidget::BPF_UpdateEditorPreview(UImage* _iconImage, UTextBlock* _text) {
}

void UCombatDeckFamilyWidget::BPF_Initialize(UWidget* _focusedWidget, UImage* _iconImage, UTextBlock* _text, USCButton* _button) {
}

USCButton* UCombatDeckFamilyWidget::BPF_GetButton() {
    return NULL;
}



