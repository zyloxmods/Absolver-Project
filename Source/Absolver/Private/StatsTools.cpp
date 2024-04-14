#include "StatsTools.h"

UStatsTools::UStatsTools() {
}

EAttributeScales UStatsTools::ConvertFloatToAttributeScale(float _fValue) {
    return EAttributeScales::S;
}

float UStatsTools::ConvertAttributeScaleToFloat(EAttributeScales _eAttributeScale) {
    return 0.0f;
}

FText UStatsTools::BPF_GetTextFromSpecialAbility(ESpecialAbilities _eAbility) {
    return FText::GetEmpty();
}

FText UStatsTools::BPF_GetTextFromFloatAttributeScale(float _scale) {
    return FText::GetEmpty();
}

FText UStatsTools::BPF_GetTextFromAttributeScale(EAttributeScales _eScale) {
    return FText::GetEmpty();
}


