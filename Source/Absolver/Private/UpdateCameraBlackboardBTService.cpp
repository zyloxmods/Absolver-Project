#include "UpdateCameraBlackboardBTService.h"

UUpdateCameraBlackboardBTService::UUpdateCameraBlackboardBTService() {
    this->NodeName = TEXT("UpdateCameraBlackboardBTService");
}

void UUpdateCameraBlackboardBTService::BPF_UpdateIsInFlyModeKey(FBlackboardKeySelector _IsInFlyModeKey) {
}

void UUpdateCameraBlackboardBTService::BPF_UpdateIsInDialogKey(FBlackboardKeySelector _IsInDialogKey) {
}

void UUpdateCameraBlackboardBTService::BPF_UpdateIsDuckingKey(FBlackboardKeySelector _DuckingKey) {
}

EDirections UUpdateCameraBlackboardBTService::BPF_GetCharacterSideOnScreen() {
    return EDirections::Left;
}





