#include "SpectatorController.h"

ASpectatorController::ASpectatorController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

void ASpectatorController::BPF_ExitSpectatorMode() {
}


