#include "NetworkSettingDB.h"

UNetworkSettingDB::UNetworkSettingDB() {
    this->m_iNumPublicConnections = 0;
    this->m_iNumPrivateConnections = 0;
    this->m_bIsLANMatch = false;
    this->m_bIsDedicated = false;
    this->m_bShouldAdvertise = false;
    this->m_bUsesStats = false;
    this->m_bUsesPresence = false;
    this->m_bAntiCheatProtected = false;
    this->m_bAllowJoinInProgress = false;
    this->m_bAllowInvites = false;
    this->m_bAllowJoinViaPresence = false;
    this->m_bAllowJoinViaPresenceFriendsOnly = false;
    this->m_iBuildUniqueId = 0;
}


