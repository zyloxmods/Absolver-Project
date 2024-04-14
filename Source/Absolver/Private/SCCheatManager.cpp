#include "SCCheatManager.h"

USCCheatManager::USCCheatManager() {
    this->m_cheatDB = NULL;
}

bool USCCheatManager::SkipMovesetTutorial(UGameInstance* _gameInstance) {
    return false;
}

bool USCCheatManager::FillInventoryWithEquipment(UGameInstance* _gameInstance) {
    return false;
}

bool USCCheatManager::AreAllAttacksUnlocked(UGameInstance* _gameInstance) {
    return false;
}


