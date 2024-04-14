#include "TextBlockScroll.h"

UTextBlockScroll::UTextBlockScroll() {
    this->m_fRestartDelay = 2.00f;
    this->m_fPixelPerSeconds = 20.00f;
    this->m_MaterialInstance = NULL;
    this->m_Material = NULL;
    this->m_fMargin = 25.00f;
}

void UTextBlockScroll::BPF_SetOpacity_Implementation(const float& _fOpacity) {
}

void UTextBlockScroll::BPF_ScrollTextIfNeeded(UTextBlock* _textBlock, URetainerBox* _retainerBox) {
}

void UTextBlockScroll::BPF_RestartScroll() {
}





