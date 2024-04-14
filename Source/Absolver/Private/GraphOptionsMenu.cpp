#include "GraphOptionsMenu.h"

UGraphOptionsMenu::UGraphOptionsMenu() {
    this->m_iCurrentResIndex = -1;
    this->m_WindowModes.AddDefaulted(3);
}

void UGraphOptionsMenu::BPF_ScalabilitySettingsChanged(EScalabilityTypes _eSetting, int32 _iValue) {
}

void UGraphOptionsMenu::BPF_ResolutionChanged(int32 _iIndex) {
}

float UGraphOptionsMenu::BPF_GetCVarForSlider(const FString& _var) {
    return 0.0f;
}

int32 UGraphOptionsMenu::BPF_GetCurrentDisplayMode() {
    return 0;
}

void UGraphOptionsMenu::BPF_CVarChangedFromSlider(const FString& _var, float _value) {
}

void UGraphOptionsMenu::BPF_Cancel() {
}

void UGraphOptionsMenu::BPF_AutoDetectSettings() {
}

void UGraphOptionsMenu::BPF_AcceptSetting() {
}





