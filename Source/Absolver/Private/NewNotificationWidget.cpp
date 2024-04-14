#include "NewNotificationWidget.h"

UNewNotificationWidget::UNewNotificationWidget() {
    this->m_eAttacksWeaponFamily = EWeaponFamilies::None;
    this->m_eAttackLearningState = EAttackLearningState::None;
    this->m_bOnSchoolHasPendingUpdate = false;
    this->m_bOnEndSeasonSummary = false;
    this->m_bAlwaysVisible = false;
}

void UNewNotificationWidget::OnStatsChanged(EStatsAppliedMode _eStatAppliedMode) {
}

void UNewNotificationWidget::OnSchoolHasPendingUpdate(const FSchool& _school) {
}

void UNewNotificationWidget::BPF_SetNotifyProgressionRewards(const TArray<ECharacterProgressionRewardTypes>& _rewards) {
}

void UNewNotificationWidget::BPF_SetNotifyNewSparePoints(bool _bNewSparePoints) {
}

void UNewNotificationWidget::BPF_SetNotifyNewAttacksForFamily(EWeaponFamilies _eWeaponFamily) {
}

void UNewNotificationWidget::BPF_SetNotifyNewAttacks(bool _bNotify) {
}

void UNewNotificationWidget::BPF_Initialize(const TArray<ECharacterProgressionRewardTypes>& _rewards, const FInventorySearchFilter& _inventoryFilter, const TArray<EButtonNotificationType>& _notifications, EWeaponFamilies _eWeaponFamily, bool _bOnSchoolHasPendingUpdate, bool _bOnEndSeasonSummary) {
}

void UNewNotificationWidget::BPF_Init(TArray<ECharacterProgressionRewardTypes> _rewards, FInventorySearchFilter _inventoryFilter, bool _bNewSparePoints, EWeaponFamilies _eWeaponFamily, bool _bNewAttacks, bool _bNewInventoryItems, bool _bNewLootBox, bool _bNewEmotes, bool _bNewIntros, bool _bOnSchoolHasPendingUpdate, bool _bOnEndSeasonSummary) {
}



