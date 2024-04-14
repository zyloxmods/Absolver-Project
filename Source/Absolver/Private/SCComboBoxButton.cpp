#include "SCComboBoxButton.h"

USCComboBoxButton::USCComboBoxButton() {
    this->m_iSelectedItem = 0;
    this->m_ScrolllistClass = NULL;
}

void USCComboBoxButton::OnRightClick(UButtonUserWidget* _button, bool _bWithMouse) {
}

void USCComboBoxButton::OnListClosed() {
}

void USCComboBoxButton::OnItemSelected(int32 _iIndex) {
}

void USCComboBoxButton::Onclick(UButtonUserWidget* _button, bool _bWithMouse) {
}

bool USCComboBoxButton::BPF_IsOpened() const {
    return false;
}

void USCComboBoxButton::BPF_InitList(TArray<FString> _items) {
}



