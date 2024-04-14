#include "OldCharacterOverview.h"

UOldCharacterOverview::UOldCharacterOverview() {
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

void UOldCharacterOverview::OnCharacterEndPlayCallBack(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason) {
}

void UOldCharacterOverview::BPF_SetDistributionsStatWidget(UDistributionStatWidget* _charaWidget) {
}

void UOldCharacterOverview::BPF_RefreshEquipmentStatsTexts(EEquipmentSlot _eSlot) {
}

FSlateColor UOldCharacterOverview::BPF_GetWeightRatioStatPreviewColor(EEquipmentStatType _eEquipmentStatType, bool _bHigherIsBetter, EStatsWeaponComputingMethod _eStatsComputingMethod) const {
    return FSlateColor{};
}

float UOldCharacterOverview::BPF_GetWeightRatio(EStatsAppliedMode _eStatsAppliedMode, EStatsWeaponComputingMethod _eStatsComputingMethod) const {
    return 0.0f;
}

EWeaponFamilies UOldCharacterOverview::BPF_GetWeaponFamilyFromStatsAppliedMode(const EStatsAppliedMode _eStatsAppliedMode) const {
    return EWeaponFamilies::BareHands;
}

void UOldCharacterOverview::BPF_GetWeaponDeckDetailsFromStatsAppliedMode(const EStatsAppliedMode _eStatsAppliedMode, FCombatDeckDetails& _outDetails) {
}

void UOldCharacterOverview::BPF_GetUIInfosForWeaponFamily(EWeaponFamilies _weaponFamily, FCharacterOverviewWeaponFamilyInfos& _outFamilyInfos) const {
}

UStatsComponent* UOldCharacterOverview::BPF_GetStatsComponent() {
    return NULL;
}

FSlateColor UOldCharacterOverview::BPF_GetSingleEquipmentStatPreviewColor(EEquipmentStatType _eEquipmentStatType, EEquipmentSlot _eEquipmentSlot, bool _bHigherIsBetter) const {
    return FSlateColor{};
}

UPreviewData* UOldCharacterOverview::BPF_GetPreviewData() const {
    return NULL;
}

void UOldCharacterOverview::BPF_GetHandDeckDetailsFromStatsAppliedMode(const EStatsAppliedMode _eStatsAppliedMode, FCombatDeckDetails& _outDetails) {
}

float UOldCharacterOverview::BPF_GetEquipmentStat(EEquipmentStatType _eEquipmentStatType, EEquipmentSlot _eEquipmentSlot, EStatsAppliedMode _eStatsAppliedMode) const {
    return 0.0f;
}

FText UOldCharacterOverview::BPF_GetDescription(EEquipmentSlot _eEquipmentSlot, EStatsAppliedMode _eStatsAppliedMode, int32 _iItemIndex) const {
    return FText::GetEmpty();
}

int32 UOldCharacterOverview::BPF_GetCurrentFightingStyle() const {
    return 0;
}

FSlateColor UOldCharacterOverview::BPF_GetColorFromStatComparison(float _fCurrentStat, float _fPreviewStat, bool _bHigherIsBetter) const {
    return FSlateColor{};
}

void UOldCharacterOverview::BPF_GetCharacterStatsReference(FCharacterStats& _struct, EStatsAppliedMode _eMode) const {
}

void UOldCharacterOverview::BPF_GetBasicStatsStruct(FMenuBasicStatsStruct& _struct, EStatsAppliedMode _eMode) const {
}

FSlateColor UOldCharacterOverview::BPF_GetBasicStatPreviewColor(EBonusType _eType) {
    return FSlateColor{};
}

FSlateColor UOldCharacterOverview::BPF_GetAllEquipmentStatPreviewColor(EEquipmentStatType _eEquipmentStatType, bool _bHigherIsBetter, bool _bCountWeapon) const {
    return FSlateColor{};
}

float UOldCharacterOverview::BPF_GetAllEquipmentStat(EEquipmentStatType _eEquipmentStatType, EStatsAppliedMode _eStatsAppliedMode, bool _bPreventWeaponCount) const {
    return 0.0f;
}





