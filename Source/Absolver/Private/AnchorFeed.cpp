#include "AnchorFeed.h"

FAnchorFeed::FAnchorFeed() {
    this->m_eAnchor = ERoomAnchor::North;
    this->m_ConnectionTemplate = NULL;
    this->m_child = 0;
    this->m_uiStreamingunitIndex = 0;
    this->m_ePassageType = EConnectionPassageType::TWO_WAYS;
    this->m_bConnectionToNextLayer = false;
}

