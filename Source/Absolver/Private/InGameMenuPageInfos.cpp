#include "InGameMenuPageInfos.h"

FInGameMenuPageInfos::FInGameMenuPageInfos() {
    this->m_Menu = EMenuEnum::InGameMenu;
    this->m_bAccessibleFromSubMenus = false;
    this->m_eAvailabilityReward = ECharacterProgressionRewardTypes::CombatDeckMenu;
}

