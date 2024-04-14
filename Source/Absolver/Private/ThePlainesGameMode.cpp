#include "ThePlainesGameMode.h"
#include "FightingCharacter.h"
#include "FightingPlayerController.h"
#include "FightingPlayerState.h"
#include "ThePlainesGameState.h"

AThePlainesGameMode::AThePlainesGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AThePlainesGameState::StaticClass();
    this->PlayerControllerClass = AFightingPlayerController::StaticClass();
    this->PlayerStateClass = AFightingPlayerState::StaticClass();
    this->DefaultPawnClass = AFightingCharacter::StaticClass();
    this->m_fGMDamageMultiplier = 1.00f;
    this->m_RewardWidgetClass = NULL;
}

void AThePlainesGameMode::KillAllAis() {
}

TArray<APlayerController*> AThePlainesGameMode::BPF_GetPlayers() {
    return TArray<APlayerController*>();
}

void AThePlainesGameMode::BPF_ForceRestartPlayerAtStartNull(AController* _controller) {
}


