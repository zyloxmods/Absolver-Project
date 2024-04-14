#include "ButtonUserWidget.h"

UButtonUserWidget::UButtonUserWidget() {
    this->Visibility = ESlateVisibility::Visible;
    this->bIsFocusable = true;
    this->m_eClickMethod = EButtonClickMethod::DownAndUp;
    this->m_bFocusOnVisible = false;
    this->m_bUseCustomNavigation = false;
    this->m_bIsClickable = true;
    this->m_bFocusOnMouseOver = false;
    this->m_bSelectOnClick = false;
    this->m_bSelectOnNavigationFocus = false;
    this->m_eSelectedVisibility = ESlateVisibility::Collapsed;
    this->m_eDeselectedVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->m_eMouseOverVisibility = ESlateVisibility::Collapsed;
    this->m_eMouseOutVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->m_bIsSelected = false;
    this->m_bPlayClickSound = true;
    this->m_bPlayRightClickSound = false;
    this->m_bIsMouseOver = false;
    this->m_bIsMouseDown = false;
}

void UButtonUserWidget::BPF_SetSelected(bool _bSelected, bool _bForce) {
}

bool UButtonUserWidget::BPF_IsActionEnabled(const FButtonAction& _action) const {
    return false;
}

bool UButtonUserWidget::BPF_GetIsSelected() {
    return false;
}







