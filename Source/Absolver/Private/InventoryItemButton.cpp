#include "InventoryItemButton.h"

UInventoryItemButton::UInventoryItemButton() {
    this->m_bUseEquippedOnInvalidIndex = false;
    this->m_bIgnoreMentoringItems = true;
    this->m_iItemID = -1;
    this->m_iItemSlot = -1;
    this->m_eSlot = EEquipmentSlot::None;
}

void UInventoryItemButton::BPF_SetItem(int32 _iItemID, EEquipmentSlot _eSlot, int32 _iItemSlot) {
}

void UInventoryItemButton::BPF_SetIgnoreMentoringItems(bool _bIgnore) {
}

bool UInventoryItemButton::BPF_IsEquipped() {
    return false;
}

bool UInventoryItemButton::BPF_IsEmpty() {
    return false;
}

void UInventoryItemButton::BPF_GetItem(FInventoryItem& _outItem) {
}

void UInventoryItemButton::BPF_GetInventoryIcon(TSoftObjectPtr<UTexture2D>& _icon) {
}


