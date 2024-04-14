#include "AnchorStreamingAction.h"

FAnchorStreamingAction::FAnchorStreamingAction() {
    this->m_eAnchor = ERoomAnchor::North;
    this->m_eStreamingAction = EStreamingAction::UnLoaded;
    this->m_uiRoomToModify = 0;
}

