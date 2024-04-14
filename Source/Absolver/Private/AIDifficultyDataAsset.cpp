#include "AIDifficultyDataAsset.h"

UAIDifficultyDataAsset::UAIDifficultyDataAsset() {
    this->m_uiFailDefenseProba = 60;
    this->m_FailCurveBuildUp = NULL;
    this->m_fAttackCooldown = 2.00f;
    this->m_fAttackCooldownDeviation = 0.50f;
    this->m_uiMaxAttackInRandomSequence = 4;
    this->m_uiMinAttackInRandomSequence = 2;
    this->m_uiPerfectLinkProba = 0;
    this->m_fDefenseOpenState = 0.00f;
    this->m_fDefenseOpenStateDeviation = 0.00f;
}


