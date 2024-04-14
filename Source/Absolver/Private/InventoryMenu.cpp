#include "InventoryMenu.h"

UInventoryMenu::UInventoryMenu() {
    this->m_NullData = NULL;
}

void UInventoryMenu::BPF_Unequip(EEquipmentSlot _eSlot, int32 _iItemSlotIndex) {
}

void UInventoryMenu::BPF_ResetPreviewEquipment() {
}

void UInventoryMenu::BPF_PreviewEquipmentCustomMaterial(int32 _iItemIndex, EEquipmentSlot _eSlot, int32 _iMaterialIndex) {
}

void UInventoryMenu::BPF_PreviewEquipment(int32 _iItemIndex, EEquipmentSlot _eSlot, bool _bPreviewClean) {
}

UInventorySlotButton* UInventoryMenu::BPF_GetSlotButton(EEquipmentSlot _slot, UTableWidget* _table, EWeaponFamilies _eWeaponFamily, int32 _itemSlot) {
    return NULL;
}

EWeaponFamilies UInventoryMenu::BPF_GetNextWeapon(EWeaponFamilies _eWeapon, ECycleDirection _eDirection) {
    return EWeaponFamilies::BareHands;
}

EEquipmentSlot UInventoryMenu::BPF_GetNextSlot(EEquipmentSlot _eSlot, ECycleDirection _eDirection, int32 _iOffset) {
    return EEquipmentSlot::Mask;
}

UInventoryItemButton* UInventoryMenu::BPF_GetEquippedItemButton(UTableWidget* _table) {
    return NULL;
}

void UInventoryMenu::BPF_EquipEmote(const FName& _emoteName, const uint8 _uiEmoteSlotIndex) {
}

void UInventoryMenu::BPF_Equip(int32 _iItemIndex, int32 _iItemSlotIndex) {
}




