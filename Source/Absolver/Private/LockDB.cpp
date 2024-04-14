#include "LockDB.h"

ULockDB::ULockDB() {
    this->m_MoveStatusOutOfFightRange[0] = EMoveStatus::Exploration;
    this->m_MoveStatusOutOfFightRange[1] = EMoveStatus::Exploration;
    this->m_MoveStatusOutOfFightRange[2] = EMoveStatus::Exploration;
    this->m_MoveStatusOutOfFightRange[3] = EMoveStatus::Exploration;
    this->m_MoveStatusOutOfFightRange[4] = EMoveStatus::Exploration;
    this->m_MoveStatusOutOfFightRange[5] = EMoveStatus::Exploration;
    this->m_MoveStatusInFightRange[0] = EMoveStatus::Exploration;
    this->m_MoveStatusInFightRange[1] = EMoveStatus::Exploration;
    this->m_MoveStatusInFightRange[2] = EMoveStatus::Exploration;
    this->m_MoveStatusInFightRange[3] = EMoveStatus::Exploration;
    this->m_MoveStatusInFightRange[4] = EMoveStatus::Exploration;
    this->m_MoveStatusInFightRange[5] = EMoveStatus::Exploration;
    this->m_MaxVerticalAngleCurve = NULL;
    this->m_bDebugMaxVerticalAngle = false;
    this->m_MaxZDiff = NULL;
}


