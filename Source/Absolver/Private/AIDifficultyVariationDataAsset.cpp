#include "AIDifficultyVariationDataAsset.h"

UAIDifficultyVariationDataAsset::UAIDifficultyVariationDataAsset() {
    this->m_fRateOverTime = 1.00f;
    this->m_fDamageReceivedToDifficultyBonus = 0.00f;
    this->m_fDamageDealtToDifficultyMalus = 0.00f;
    this->m_fDifficultyVariations[0] = 0.00f;
    this->m_fDifficultyVariations[1] = 0.00f;
    this->m_fDifficultyVariations[2] = 0.00f;
    this->m_fDifficultyVariations[3] = 0.00f;
    this->m_fDifficultyVariations[4] = 0.00f;
    this->m_fDifficultyVariations[5] = 0.00f;
    this->m_fDifficultyVariations[6] = 0.00f;
    this->m_fDifficultyVariations[7] = 0.00f;
}


