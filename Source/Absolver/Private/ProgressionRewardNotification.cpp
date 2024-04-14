#include "ProgressionRewardNotification.h"

UProgressionRewardNotification::UProgressionRewardNotification() {
    this->m_eRewardType = ECharacterProgressionRewardTypes::None;
    this->m_Unlock = NULL;
}

UProgressionRewardNotification* UProgressionRewardNotification::BPF_Init(ECharacterProgressionRewardTypes _eRewardType, FCharacterProgressionReward _reward, UCharacterProgressionUnlockDB* _unlock) {
    return NULL;
}


