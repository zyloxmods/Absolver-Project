#include "AIBaseBehaviourDataAsset.h"

UAIBaseBehaviourDataAsset::UAIBaseBehaviourDataAsset() {
    this->m_fProbabilityDepletedPerSecond = 0.10f;
    this->m_fMinProbability = 0.00f;
    this->m_fInitialProbability = 0.00f;
    this->m_fCooldown = 1.00f;
}


