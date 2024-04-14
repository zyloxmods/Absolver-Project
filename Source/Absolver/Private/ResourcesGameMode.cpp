#include "ResourcesGameMode.h"

AResourcesGameMode::AResourcesGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_iNbZoneActiveAtTime = 2;
    this->m_fDelayBetweenAreaActivation = 5.00f;
    this->m_fNeededDelayToScore = 0.20f;
    this->m_fScoreUpForFirstPlayerOnArea = 1.00f;
    this->m_fScoreUpForAdditionalPlayerOnArea = 1.00f;
    this->m_fScoreLimitBeforeCapture = 25.00f;
    this->m_fScoreRewardForCapture = 150.00f;
}

void AResourcesGameMode::OnResourceAreaStatusChanged(AResourceArea* _resourceArea, EResourceAreaStatus _eNewStatus) {
}


