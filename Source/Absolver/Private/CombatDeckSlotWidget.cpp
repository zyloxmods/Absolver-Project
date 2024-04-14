#include "CombatDeckSlotWidget.h"

UCombatDeckSlotWidget::UCombatDeckSlotWidget() {
    this->m_eFamily = EWeaponFamilies::BareHands;
    this->m_CategoryIcon = NULL;
}

void UCombatDeckSlotWidget::SetWeaponFamily(EWeaponFamilies _eFamily) {
}

void UCombatDeckSlotWidget::OnButtonFocusLost(USCButton* _button) {
}

void UCombatDeckSlotWidget::OnButtonFocused(USCButton* _button) {
}

void UCombatDeckSlotWidget::OnButtonClicked() {
}

bool UCombatDeckSlotWidget::BPF_IsSlotActive() const {
    return false;
}

void UCombatDeckSlotWidget::BPF_Initialize(UWidget* _focusedWidget, USCButton* _button) {
}

USCButton* UCombatDeckSlotWidget::BPF_GetButton() {
    return NULL;
}


