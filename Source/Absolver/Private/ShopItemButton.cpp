#include "ShopItemButton.h"

UShopItemButton::UShopItemButton() {
    this->m_ItemData = NULL;
    this->m_iMaterialIndex = 0;
    this->m_eSlot = EEquipmentSlot::None;
    this->m_iFragmentPrice = 0;
    this->m_iPrestigePointPrice = 0;
    this->m_iGMLevelRequired = 0;
    this->m_iGleamLevelRequired = 0;
    this->m_bAbsolverRequired = false;
    this->m_bForceNotBuyable = false;
    this->m_eButtonType = EShopButtonType::None;
}

void UShopItemButton::BPF_SetType(EShopButtonType _Type) {
}

void UShopItemButton::BPF_SetPrice(int32 _iFragmentPrice, int32 _iPrestigePointPrice, bool _bNotify) {
}

void UShopItemButton::BPF_SetMaterialIndex(int32 _iIndex, bool _bNotify) {
}

void UShopItemButton::BPF_SetItem(UBaseItemData* _ItemData, EEquipmentSlot _eSlot, int32 _iItemSlot, bool _bNotify) {
}

void UShopItemButton::BPF_SetGMLevelRequired(int32 _iGMLevel, bool _bNotify) {
}

void UShopItemButton::BPF_SetGleamLevelRequired(int32 _iGleamLevel, bool _bNotify) {
}

void UShopItemButton::BPF_SetForceNotBuyable(bool _bValue, bool _bNotify) {
}

void UShopItemButton::BPF_SetEmoteName(const FName& _name, bool _bNotify) {
}

void UShopItemButton::BPF_SetAbsolverRequired(bool _bValue, bool _bNotify) {
}

void UShopItemButton::BPF_PlayEmoteAnim() {
}

void UShopItemButton::BPF_OnPreviewButtonPressed() {
}

bool UShopItemButton::BPF_IsPlayingEmoteAnim() {
    return false;
}

UBaseItemData* UShopItemButton::BPF_GetItemData() {
    return NULL;
}

void UShopItemButton::BPF_GetInventoryIcon(TSoftObjectPtr<UTexture2D>& _icon) {
}


