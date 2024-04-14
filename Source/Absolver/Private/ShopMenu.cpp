#include "ShopMenu.h"

UShopMenu::UShopMenu() {
    this->m_NullData = NULL;
    this->m_iHairColorIndex = 0;
    this->m_HairDataIndex = 0;
    this->m_char = NULL;
}

void UShopMenu::OnItemLoaded(const TArray<TSoftObjectPtr<UObject>>& _items) {
}

void UShopMenu::BPF_UpdateStats(EStatsAppliedMode _eStatsAppliedMode) {
}

void UShopMenu::BPF_ResetPreviewEquipment() {
}

void UShopMenu::BPF_PreviewEquipment(UBaseItemData* _item, int32 _iMaterialIndex, EEquipmentSlot _eSlot) {
}

void UShopMenu::BPF_PreloadAssets() {
}

void UShopMenu::BPF_InitHairIndex(int32 _iHairCutIndex, int32 _iHairColorIndex) {
}

UUserWidget* UShopMenu::BPF_GetWidgetFromItemData(UPagingScrollBox* _ScrollBox, UBaseItemData* _data) {
    return NULL;
}

uint8 UShopMenu::BPF_GetSkinToneIndex(AFightingCharacter* _char) {
    return 0;
}

EEquipmentSlot UShopMenu::BPF_GetNextSlot(EEquipmentSlot _eSlot, ECycleDirection _eDirection, int32 _iOffset) {
    return EEquipmentSlot::Mask;
}

uint8 UShopMenu::BPF_GetHairCutIndex(AFightingCharacter* _char) {
    return 0;
}

uint8 UShopMenu::BPF_GetHairColorIndex(AFightingCharacter* _char) {
    return 0;
}

void UShopMenu::BPF_ChangeSkinTone(AFightingCharacter* _char, uint8 _uiSkinTone) {
}

void UShopMenu::BPF_ChangeSex(AFightingCharacter* _char, ECharacterSex _eSex) {
}

void UShopMenu::BPF_ChangeHair(AFightingCharacter* _char, int32 _iHairIndex, int32 _iColorIndex) {
}

bool UShopMenu::BPF_CanValidate(AFightingCharacter* _char, ECharacterSex _eSex, uint8 _uiSkinTone, int32 _iHairCutIndex, int32 _iHairColorIndex) {
    return false;
}

void UShopMenu::BPF_ApplyAppearanceChange(AFightingCharacter* _char, ECharacterSex _eSex, uint8 _uiSkinTone, int32 _iHairCutIndex, int32 _iHairColorIndex) {
}


