#include "NewGameMenuWidget.h"

UNewGameMenuWidget::UNewGameMenuWidget() {
    this->m_iHairColorIndex = 0;
    this->m_BuildList = NULL;
    this->m_NewSave = NULL;
    this->m_iMaxCharacterNameLength = 16;
}

void UNewGameMenuWidget::OnItemLoaded(const TArray<TSoftObjectPtr<UObject>>& _items) {
}

void UNewGameMenuWidget::OnAssetLoaded() {
}

bool UNewGameMenuWidget::BPF_ValidateAndSaveProfile() {
    return false;
}

void UNewGameMenuWidget::BPF_UpdateSaveName(const FString& _name) {
}

void UNewGameMenuWidget::BPF_SetSkinToneIndex(int32 _iNewIndex) {
}

void UNewGameMenuWidget::BPF_SetNewSaveCharaSex(int32 _iNewSelectedIndex) {
}

void UNewGameMenuWidget::BPF_SetHairCut(int32 _iNewIndex) {
}

ESaveValidationResult UNewGameMenuWidget::BPF_SaveNameIsValid(const FString& _name) {
    return ESaveValidationResult::Valid;
}

UCharacterBuildDB* UNewGameMenuWidget::BPF_GetCurrentPreset() {
    return NULL;
}

void UNewGameMenuWidget::BPF_ChangeBuild(int32 _iBuildIndex) {
}



