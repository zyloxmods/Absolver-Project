#include "HittedDB.h"

UHittedDB::UHittedDB() {
    this->m_fLowDistanceFromRoot = 20.00f;
    this->m_fHighDistanceFromRoot = 30.00f;
    this->m_fHalfAngleSouth = 25.00f;
    this->m_FallHandPose = EHandPoses::None;
    this->m_fFallStunTime = 0.30f;
    this->m_fAutoKillTimeMax = 6.00f;
    this->m_fAutoKillHeightMax = 2000.00f;
    this->m_HeightDamagesCurve = NULL;
    this->m_WeightDamagesCurve = NULL;
    this->m_fMediumFallHeightThreshold = 280.00f;
    this->m_fHeavyFallHeightThreshold = 450.00f;
    this->m_fFallMaxHeight = 1000.00f;
    this->m_fFallMinHeightDamageRatio = 0.20f;
    this->m_fFallMaxHeightDamageRatio = 0.60f;
    this->m_fDamagePercentAssistDetectionThreshold = 0.10f;
    this->m_fDamagePercentKillDetectionThreshold = 0.50f;
    this->m_fDamageHistoryNotInFightTimeOut = 10.00f;
    this->m_fDamageHistoryOutOfRangeTimeOut = 10.00f;
    this->m_fDamageHistoryDeadTimeOut = 10.00f;
    this->m_fDamageHistoryInvalidTimeOut = 30.00f;
    this->m_bTimeSinceLastHitPrevails = false;
    this->m_bLongestStunPrevailsBetweenHits = false;
}


