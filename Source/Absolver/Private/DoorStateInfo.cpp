#include "DoorStateInfo.h"

FDoorStateInfo::FDoorStateInfo() {
    this->m_eState = EBlockerSate::Blocked;
    this->m_bPlaySound = false;
}

