#include "MenuWidget.h"

UMenuWidget::UMenuWidget() {
    this->m_bNotifyUIInputModeChanged = true;
    this->m_eLifeCycle = EWidgetLifeCycle::ReleaseOnPop;
    this->m_bPushInputContext = true;
    this->m_bHideOnPushedOut = true;
    this->m_bHideOnPopOut = true;
    this->m_CurrentMenuVisibility = ESlateVisibility::Collapsed;
    this->m_iZOrder = 0;
}

void UMenuWidget::BPF_PlayTransitionAnimation(UWidgetAnimation* _inAnimation, TEnumAsByte<EUMGSequencePlayMode::Type> _ePlayMode, bool _bDisableInputs) {
}

void UMenuWidget::BPF_PlayBackSound() {
}

bool UMenuWidget::BPF_IsCurrentMenu() {
    return false;
}

int32 UMenuWidget::BPF_GetZOrder() {
    return 0;
}

UUserWidget* UMenuWidget::BPF_GetMenuAnimations() {
    return NULL;
}

bool UMenuWidget::BPF_GetIsInTransitionAnimation() {
    return false;
}

void UMenuWidget::BPF_EnableInputs() {
}

void UMenuWidget::BPF_DisableInputs() {
}

bool UMenuWidget::BPF_AreInputsEnabled() {
    return false;
}





















