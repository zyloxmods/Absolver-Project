#include "SCPlayerController.h"

ASCPlayerController::ASCPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->m_bSaveProfileOnly = false;
}

void ASCPlayerController::UnlockAchievement(const FString& achievementId) {
}

void ASCPlayerController::PushInputContext(UInputContextData* _inputContextData) {
}

void ASCPlayerController::PopInputContext(UInputContextData* _inputContextData) {
}

void ASCPlayerController::BPF_UpdateAchievementCompletion(const FString& _achievementId, float _fCompletionPercent) {
}

void ASCPlayerController::BPF_SetNeedSave() {
}

void ASCPlayerController::BPF_ScheduleSave() {
}

void ASCPlayerController::BPF_SaveIfScheduled() {
}

void ASCPlayerController::BPF_QueryAchievements() {
}









