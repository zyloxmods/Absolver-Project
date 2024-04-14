#include "PagingScrollBox.h"

UPagingScrollBox::UPagingScrollBox() {
    this->m_iLoadedRowCount = 4;
    this->m_CellClass = NULL;
}

void UPagingScrollBox::OnItemSelected(UButtonUserWidget* _button, UButtonUserWidget* _prevButton) {
}

void UPagingScrollBox::OnItemRightClicked(UButtonUserWidget* _button, bool _bWithMouse) {
}

void UPagingScrollBox::OnItemPreviewButtonPressedCallback() {
}

void UPagingScrollBox::OnItemLostFocus(UButtonUserWidget* _button, EFocusCause _eCause) {
}

void UPagingScrollBox::OnItemFocused(UButtonUserWidget* _button, EFocusCause _eCause) {
}

void UPagingScrollBox::OnItemClicked(UButtonUserWidget* _button, bool _bWithMouse) {
}

UUserWidget* UPagingScrollBox::BPF_GetWidgetFromSectionDataIndex(int32 _iSection, int32 _iDataIndex) {
    return NULL;
}

UUserWidget* UPagingScrollBox::BPF_GetWidgetFromDataIndex(int32 _iIndex) {
    return NULL;
}

int32 UPagingScrollBox::BPF_GetWidgetDataIndex(const int32 iRow, const int32 iCol) const {
    return 0;
}

int32 UPagingScrollBox::BPF_GetRowDataIndex(const int32 iRow) const {
    return 0;
}

UUserWidget* UPagingScrollBox::BPF_GetLastVisibleWidgetFromSection(int32 _iSection) {
    return NULL;
}

UUserWidget* UPagingScrollBox::BPF_GetLastVisibleCell() {
    return NULL;
}

int32 UPagingScrollBox::BPF_GetItemCount() const {
    return 0;
}

int32 UPagingScrollBox::BPF_GetDataIndexFromWidget(UUserWidget* _widget) {
    return 0;
}


