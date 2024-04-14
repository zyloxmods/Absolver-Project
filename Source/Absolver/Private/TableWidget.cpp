#include "TableWidget.h"

UTableWidget::UTableWidget() {
    this->m_bUseCustomLayout = false;
    this->m_ItemHorizontalAlignment = HAlign_Fill;
    this->m_ItemVerticalAlignment = VAlign_Fill;
    this->m_RowHorizontalAlignment = HAlign_Fill;
    this->m_RowVerticalAlignment = VAlign_Center;
    this->m_bUseCustomNavigation = true;
    this->m_iItemsPerRow = 3;
    this->m_RowWidgetClass = NULL;
}

void UTableWidget::OnItemSelected(UButtonUserWidget* _button, UButtonUserWidget* _prevButton) {
}

void UTableWidget::OnItemRightClicked(UButtonUserWidget* _button, bool _bWithMouse) {
}

void UTableWidget::OnItemNavigation(UButtonUserWidget* _button, EUINavigation _eNavigation) {
}

void UTableWidget::OnItemLostFocus(UButtonUserWidget* _button, EFocusCause _eCause) {
}

void UTableWidget::OnItemFocused(UButtonUserWidget* _button, EFocusCause _eCause) {
}

void UTableWidget::OnItemClicked(UButtonUserWidget* _button, bool _bWithMouse) {
}

UButtonUserWidget* UTableWidget::BPF_GetSelectedButton() {
    return NULL;
}

UWidget* UTableWidget::BPF_GetNextItem(UWidget* currentButton, ECycleDirection _eDirection, bool _bSkipDisabled) {
    return NULL;
}

UWidget* UTableWidget::BPF_GetLastVisibleItem() {
    return NULL;
}

int32 UTableWidget::BPF_GetItemIndex(UWidget* _item) {
    return 0;
}

UUserWidget* UTableWidget::BPF_GetItemAtIndex(int32 _iIndex) {
    return NULL;
}

int32 UTableWidget::BPF_GetChildrenCount() {
    return 0;
}

void UTableWidget::BPF_AddItem(UUserWidget* _widget) {
}


