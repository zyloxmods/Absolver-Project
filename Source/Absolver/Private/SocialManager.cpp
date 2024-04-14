#include "SocialManager.h"

USocialManager::USocialManager() {
    this->m_fCoopResolutionTimeOut = 30.00f;
    this->m_fCoopResolutionReturningPvETimeOut = 60.00f;
    this->m_NbNeededPlayersPerGameMode[0] = 0;
    this->m_NbNeededPlayersPerGameMode[1] = 0;
    this->m_NbNeededPlayersPerGameMode[2] = 0;
    this->m_NbMaxPlayersPerGameMode[0] = 0;
    this->m_NbMaxPlayersPerGameMode[1] = 0;
    this->m_NbMaxPlayersPerGameMode[2] = 0;
}


