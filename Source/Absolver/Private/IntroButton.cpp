#include "IntroButton.h"

UIntroButton::UIntroButton() {
    this->m_bIntroEquipped = false;
    this->m_bIntroUnlocked = false;
}

void UIntroButton::BPF_OnPreviewButtonPressed() {
}

bool UIntroButton::BPF_IsIntroEquipped() const {
    return false;
}


