#include "TabWidget.h"

UTabWidget::UTabWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_uiEnumValue = 0;
}

uint8 UTabWidget::BPF_GetEnumValue() {
    return 0;
}


