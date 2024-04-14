#include "DebugMenu.h"

UDebugMenu::UDebugMenu() {
    this->m_CharacterBuildPath = TEXT("/Game/DB/Characters/Builds");
    this->m_DummyCharcterBuild = NULL;
    this->m_CharacterBuildList = NULL;
    this->m_LoadingButtonClass = NULL;
    this->m_StartUpCharaClass = NULL;
}

void UDebugMenu::BPF_ShowSaves(UPanelWidget* _boxToFill) {
}

void UDebugMenu::BPF_SetVBoxInvisible() {
}

void UDebugMenu::BPF_LoadEquipmentSelection() {
}

void UDebugMenu::BPF_LoadCharacterBuild(const FString& _buildName) {
}

void UDebugMenu::BPF_LoadAndSetFirstSave(ULoadSlot* _loadSlot) {
}

void UDebugMenu::BPF_DeleteSaveFromName(const FString& _saveName, UPanelWidget* _boxToRefresh) {
}

void UDebugMenu::BPF_CreateNewSave(const FString& _charaName) {
}

void UDebugMenu::BPF_CreateCharacterBuild(const FString& _buildName) {
}

void UDebugMenu::BPF_AddItemToInventory(UUsableItemData* _item, int32 _iItemNumber) {
}


