#include "RewardScreenWidget.h"

URewardScreenWidget::URewardScreenWidget() {
    this->m_fCurrentCharacterLevelProgress = 0.00f;
    this->m_bShowRewards = false;
    this->m_GameResult = EEndGameResult::Victory;
    this->m_eEndGameReason = EMatchEndReason::None;
}

void URewardScreenWidget::BPF_StopCharacterLevelBarProgress() {
}

void URewardScreenWidget::BPF_StartMatchMaking() {
}

void URewardScreenWidget::BPF_StartCharacterLevelBarProgress(float _fDuration, UCurveFloat* _progressCurve, float _fDelay) {
}

void URewardScreenWidget::BPF_PauseCharacterLevelBar(float _fDuration) {
}

void URewardScreenWidget::BPF_LaunchPostMatchScene() {
}

void URewardScreenWidget::BPF_InitRewardScreen(EEndGameResult _eGameResult, EMatchEndReason _eEndGameReason, FGameModeRewardStruct _reward, const TArray<FGameModeLootStruct>& _loot, const TArray<FLootBoxRewardStruct>& _LootBoxes, bool _bShowRewards) {
}

void URewardScreenWidget::BPF_AddRemainingGameModePoints() {
}

void URewardScreenWidget::BPF_AddOneGameModePoint(bool& _bLevelUp, FGameModeLootStruct& _loot, FLootBoxRewardStruct& _LootBoxes) {
}






