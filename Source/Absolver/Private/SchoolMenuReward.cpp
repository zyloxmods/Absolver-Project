#include "SchoolMenuReward.h"

USchoolMenuReward::USchoolMenuReward() {
    this->m_iLevel = 0;
    this->m_eReward = ECharacterProgressionRewardTypes::None;
}

void USchoolMenuReward::BPF_SetSchool(const FSchool& _school) {
}

void USchoolMenuReward::BPF_SetReward(ECharacterProgressionRewardTypes _eReward) {
}

void USchoolMenuReward::BPF_SetLevel(int32 _ilevel) {
}

TSoftObjectPtr<UTexture2D> USchoolMenuReward::BPF_GetIcon() {
    return NULL;
}


