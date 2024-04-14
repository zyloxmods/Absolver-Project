#include "CharacterMenu.h"

UCharacterMenu::UCharacterMenu() {
}

void UCharacterMenu::OnStatsUpdated(EStatsAppliedMode _eStatsAppliedMode) {
}

void UCharacterMenu::BPF_PreviewComboSlot(EWeaponFamilies _eWeaponFamily, int32 _iSlotIndex) {
}

UFightingStyleButton* UCharacterMenu::BPF_GetFightingStyleButtonInTable(UTableWidget* _table, int32 _iFightingStyleID) {
    return NULL;
}

UCombatDeckButton* UCharacterMenu::BPF_GetCombatDeckButtonInPanel(UPanelWidget* _panel, EWeaponFamilies _eWeaponFamily, int32 _iSlotIndex) {
    return NULL;
}

void UCharacterMenu::BPF_EquipEmote(const FName& _emoteName, const uint8 _uiEmoteSlotIndex) {
}


