#include "CreditsWidget.h"

UCreditsWidget::UCreditsWidget() {
    this->m_fScrollFactor = 1.00f;
    this->m_iScrollPixelPerSeconds = 100;
    this->m_fScrollTime = 0.00f;
}

void UCreditsWidget::BPF_OnScrollEnd() {
}



