#include "CompassDB.h"

UCompassDB::UCompassDB() {
    this->m_iNbTrail = 10;
    this->m_fTimeBetweenTrailElement = 0.07f;
    this->m_iMinAlpha = 30;
    this->m_ReachingDynamicCurve[0] = NULL;
    this->m_ReachingDynamicCurve[1] = NULL;
    this->m_ReachingDynamicCurve[2] = NULL;
    this->m_ReachingDynamicCurve[3] = NULL;
    this->m_ReachingDynamicCurve[4] = NULL;
    this->m_ReachingDynamicCurve[5] = NULL;
    this->m_DefautlReachingDynamicCurve = NULL;
}


