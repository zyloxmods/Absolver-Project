#include "GameplayOptionsMenu.h"

UGameplayOptionsMenu::UGameplayOptionsMenu() {
}

void UGameplayOptionsMenu::BPF_SetSwitchTargetOnAttack(bool _bSwitchTargetOnAttack) {
}

void UGameplayOptionsMenu::BPF_SetInvertCameraYAxis(bool _bInvert) {
}

void UGameplayOptionsMenu::BPF_SetInvertCameraXAxis(bool _bInvert) {
}

void UGameplayOptionsMenu::BPF_SetGameplayOptionValue(EIntergerGameplayOptionTypes _eOptionType, int32 _iOptionValue) {
}

void UGameplayOptionsMenu::BPF_RestoreOptionDefaultValue(EIntergerGameplayOptionTypes _eOptionType) {
}

bool UGameplayOptionsMenu::BPF_GetSwitchTargetOnAttack() {
    return false;
}

bool UGameplayOptionsMenu::BPF_GetInvertCameraYAxis() {
    return false;
}

bool UGameplayOptionsMenu::BPF_GetInvertCameraXAxis() {
    return false;
}

int32 UGameplayOptionsMenu::BPF_GetGameplayOptionValue(EIntergerGameplayOptionTypes _eOptionType) {
    return 0;
}

float UGameplayOptionsMenu::BPF_GetGameplayOptionNormalizedValueStep(EIntergerGameplayOptionTypes _eOptionType) {
    return 0.0f;
}

float UGameplayOptionsMenu::BPF_GetGameplayOptionNormalizedValue(EIntergerGameplayOptionTypes _eOptionType) {
    return 0.0f;
}

void UGameplayOptionsMenu::BPF_Default() {
}


