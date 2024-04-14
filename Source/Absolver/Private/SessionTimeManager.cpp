#include "SessionTimeManager.h"

USessionTimeManager::USessionTimeManager() {
    this->m_fDelayBetweenSync = 1.00f;
    this->m_fTimeSinceLastSync = -1.00f;
    this->m_fScaleTime = 1.00f;
}


