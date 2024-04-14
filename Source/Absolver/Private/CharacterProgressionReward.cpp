#include "CharacterProgressionReward.h"

FCharacterProgressionReward::FCharacterProgressionReward() {
    this->m_eUnlockCondition = ECharacterProgressionRewardConditions::Level;
    this->m_iUnlockParameter = 0;
    this->m_bAddToNewRewards = false;
}

