#include "CancelDB.h"

UCancelDB::UCancelDB() {
    this->m_fCancelReorientationDuration = 0.15f;
    this->m_CancelReorientationCurve = NULL;
    this->m_CancelDisplacementCurve = NULL;
    this->m_fCancelDuration = 1.00f;
    this->m_bDoesCancelConsumeShards = false;
    this->m_fCancelGuardGaugeCost = 10.00f;
    this->m_bCancelHasImpactOnGuardGauge = true;
    this->m_fCancelWindowDuration = 0.60f;
    this->m_CancelInterruptibleReleaseLayer = NULL;
    this->m_iFrameInterruptibleRelease = 3;
}


