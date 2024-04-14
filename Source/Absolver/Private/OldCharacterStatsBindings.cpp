#include "OldCharacterStatsBindings.h"

UOldCharacterStatsBindings::UOldCharacterStatsBindings() {
    this->m_PreviewDataDB = NULL;
}

FSlateColor UOldCharacterStatsBindings::BPF_GetWeightRatioCompareColor(EStatsWeaponComputingMethod _eStatsWeaponComputingMethod) {
    return FSlateColor{};
}

FString UOldCharacterStatsBindings::BPF_GetWeightRatio(EStatsWeaponComputingMethod _eStatsWeaponComputingMethod) {
    return TEXT("");
}

FSlateColor UOldCharacterStatsBindings::BPF_GetWeaponWeightRatioCompareColor() {
    return FSlateColor{};
}

FString UOldCharacterStatsBindings::BPF_GetWeaponWeightRatio() {
    return TEXT("");
}

FSlateColor UOldCharacterStatsBindings::BPF_GetTotalProtectionCompareColor() {
    return FSlateColor{};
}

FString UOldCharacterStatsBindings::BPF_GetTotalProtection() {
    return TEXT("");
}

FSlateColor UOldCharacterStatsBindings::BPF_GetPlayerStaminaCompareColor() {
    return FSlateColor{};
}

FString UOldCharacterStatsBindings::BPF_GetPlayerStamina() {
    return TEXT("");
}

FSlateColor UOldCharacterStatsBindings::BPF_GetPlayerShardsCompareColor() {
    return FSlateColor{};
}

FString UOldCharacterStatsBindings::BPF_GetPlayerShards() {
    return TEXT("");
}

FSlateColor UOldCharacterStatsBindings::BPF_GetPlayerLevelCompareColor() {
    return FSlateColor{};
}

FString UOldCharacterStatsBindings::BPF_GetPlayerLevel() {
    return TEXT("");
}

FSlateColor UOldCharacterStatsBindings::BPF_GetPlayerHealthCompareColor() {
    return FSlateColor{};
}

FString UOldCharacterStatsBindings::BPF_GetPlayerHealth() {
    return TEXT("");
}

FSlateColor UOldCharacterStatsBindings::BPF_GetNormalWeightRatioCompareColor() {
    return FSlateColor{};
}

FString UOldCharacterStatsBindings::BPF_GetNormalWeightRatio() {
    return TEXT("");
}

FSlateColor UOldCharacterStatsBindings::BPF_GetMaxEquipLoadCompareColor() {
    return FSlateColor{};
}

FString UOldCharacterStatsBindings::BPF_GetMaxEquipLoad() {
    return TEXT("");
}

FText UOldCharacterStatsBindings::BPF_GetFightingStyleName() {
    return FText::GetEmpty();
}

FAsyncTextureStruct UOldCharacterStatsBindings::BPF_GetFightingStyleMiniIcon() {
    return FAsyncTextureStruct{};
}

FSlateColor UOldCharacterStatsBindings::BPF_GetCutProtectionCompareColor() {
    return FSlateColor{};
}

FString UOldCharacterStatsBindings::BPF_GetCutProtection() {
    return TEXT("");
}

FSlateColor UOldCharacterStatsBindings::BPF_GetBluntProtectionCompareColor() {
    return FSlateColor{};
}

FString UOldCharacterStatsBindings::BPF_GetBluntProtection() {
    return TEXT("");
}

FSlateColor UOldCharacterStatsBindings::BPF_GetBareHandWeightRatioCompareColor() {
    return FSlateColor{};
}

FString UOldCharacterStatsBindings::BPF_GetBareHandWeightRatio() {
    return TEXT("");
}


