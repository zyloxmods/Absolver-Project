#include "InventorySlotButton.h"

UInventorySlotButton::UInventorySlotButton() {
    this->m_eSlot = EEquipmentSlot::None;
    this->m_eWeaponFamily = EWeaponFamilies::None;
    this->m_iItemSlot = -1;
}

void UInventorySlotButton::BPF_SetSlot(EEquipmentSlot _eSlot, EWeaponFamilies _eWeaponFamily, int32 _iItemSlot) {
}

bool UInventorySlotButton::BPF_IsEquipped() {
    return false;
}

bool UInventorySlotButton::BPF_IsEmpty() {
    return false;
}

EEquipmentSlot UInventorySlotButton::BPF_GetSlot() const {
    return EEquipmentSlot::Mask;
}

void UInventorySlotButton::BPF_GetItem(FInventoryItem& _item) {
}


