#include "LevelUpNotification.h"
#include "EMenuEnum.h"

ULevelUpNotification::ULevelUpNotification() {
    this->m_eOpenMenu = EMenuEnum::InGameMenu;
    this->m_iLevel = 0;
}

ULevelUpNotification* ULevelUpNotification::BPF_Init(int32 _ilevel) {
    return NULL;
}


