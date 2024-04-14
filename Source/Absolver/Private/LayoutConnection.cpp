#include "LayoutConnection.h"

FLayoutConnection::FLayoutConnection() {
    this->m_eAnchor = ERoomAnchor::North;
    this->m_child = 0;
    this->m_ConnectionOverride = NULL;
    this->m_bIsConnectionToNextLayer = false;
    this->m_ePassageType = EConnectionPassageType::TWO_WAYS;
    this->m_ItemToUnlockDoors = NULL;
}

