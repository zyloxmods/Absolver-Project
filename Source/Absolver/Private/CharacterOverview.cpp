#include "CharacterOverview.h"

UCharacterOverview::UCharacterOverview() {
    this->m_fAverageHandWR = 0.00f;
    this->m_fPreviewAverageHandWR = 0.00f;
    this->m_fAverageWeaponWR = 0.00f;
    this->m_fPreviewAverageWeaponWR = 0.00f;
    this->m_fAverageNormalHandsDmg = 0.00f;
    this->m_fAverageSpecialHandsDmg = 0.00f;
    this->m_fAverageNormalWeaponDmg = 0.00f;
    this->m_fAverageSpecialWeaponDmg = 0.00f;
    this->m_fPreviewAverageNormalHandsDmg = 0.00f;
    this->m_fPreviewAverageSpecialHandsDmg = 0.00f;
    this->m_fPreviewAverageNormalWeaponDmg = 0.00f;
    this->m_fPreviewAverageSpecialWeaponDmg = 0.00f;
    this->m_PreviewData = NULL;
    this->m_fStatComparisionMarginValue = 0.00f;
}

void UCharacterOverview::OnCharacterEndPlayCallBack(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason) {
}

void UCharacterOverview::BPF_SetDistributionsStatWidget(UDistributionStatWidget* _charaWidget) {
}

void UCharacterOverview::BPF_RefreshEquipmentStatsTexts(EEquipmentSlot _eSlot) {
}

FSlateColor UCharacterOverview::BPF_GetWeightRatioStatPreviewColor(EEquipmentStatType _eEquipmentStatType, bool _bHigherIsBetter, EStatsWeaponComputingMethod _eStatsComputingMethod) const {
    return FSlateColor{};
}

float UCharacterOverview::BPF_GetWeightRatio(EStatsAppliedMode _eStatsAppliedMode, EStatsWeaponComputingMethod _eStatsComputingMethod) const {
    return 0.0f;
}

EWeaponFamilies UCharacterOverview::BPF_GetWeaponFamilyFromStatsAppliedMode(const EStatsAppliedMode _eStatsAppliedMode) const {
    return EWeaponFamilies::BareHands;
}

void UCharacterOverview::BPF_GetWeaponDeckDetailsFromStatsAppliedMode(const EStatsAppliedMode _eStatsAppliedMode, FCombatDeckDetails& _outDetails) {
}

void UCharacterOverview::BPF_GetUIInfosForWeaponFamily(EWeaponFamilies _weaponFamily, FCharacterOverviewWeaponFamilyInfos& _outFamilyInfos) const {
}

UStatsComponent* UCharacterOverview::BPF_GetStatsComponent() {
    return NULL;
}

FSlateColor UCharacterOverview::BPF_GetSingleEquipmentStatPreviewColor(EEquipmentStatType _eEquipmentStatType, EEquipmentSlot _eEquipmentSlot, bool _bHigherIsBetter) const {
    return FSlateColor{};
}

UPreviewData* UCharacterOverview::BPF_GetPreviewData() const {
    return NULL;
}

void UCharacterOverview::BPF_GetHandDeckDetailsFromStatsAppliedMode(const EStatsAppliedMode _eStatsAppliedMode, FCombatDeckDetails& _outDetails) {
}

float UCharacterOverview::BPF_GetEquipmentStat(EEquipmentStatType _eEquipmentStatType, EEquipmentSlot _eEquipmentSlot, EStatsAppliedMode _eStatsAppliedMode) const {
    return 0.0f;
}

FText UCharacterOverview::BPF_GetDescription(EEquipmentSlot _eEquipmentSlot, EStatsAppliedMode _eStatsAppliedMode, int32 _iItemIndex) const {
    return FText::GetEmpty();
}

int32 UCharacterOverview::BPF_GetCurrentFightingStyle() const {
    return 0;
}

FSlateColor UCharacterOverview::BPF_GetColorFromStatComparison(float _fCurrentStat, float _fPreviewStat, bool _bHigherIsBetter) const {
    return FSlateColor{};
}

void UCharacterOverview::BPF_GetCharacterStatsReference(FCharacterStats& _struct, EStatsAppliedMode _eMode) const {
}

void UCharacterOverview::BPF_GetBasicStatsStruct(FMenuBasicStatsStruct& _struct, EStatsAppliedMode _eMode) const {
}

FSlateColor UCharacterOverview::BPF_GetBasicStatPreviewColor(EBonusType _eType) {
    return FSlateColor{};
}

FSlateColor UCharacterOverview::BPF_GetAllEquipmentStatPreviewColor(EEquipmentStatType _eEquipmentStatType, bool _bHigherIsBetter, bool _bCountWeapon) const {
    return FSlateColor{};
}

float UCharacterOverview::BPF_GetAllEquipmentStat(EEquipmentStatType _eEquipmentStatType, EStatsAppliedMode _eStatsAppliedMode, bool _bPreventWeaponCount) const {
    return 0.0f;
}





