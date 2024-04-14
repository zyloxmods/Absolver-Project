#include "OneVersusOneGameMode.h"

AOneVersusOneGameMode::AOneVersusOneGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bEveryDeathIsAKill = true;
    this->m_HealthRefillCoeff = NULL;
}

void AOneVersusOneGameMode::BPF_StorePlayersHealthRatio_Implementation() {
}

float AOneVersusOneGameMode::BPF_GetHealthKillBonusRatio_Implementation(AController* _playerController) {
    return 0.0f;
}


