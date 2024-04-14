#include "BaseMovementDB.h"

UBaseMovementDB::UBaseMovementDB() {
    this->m_fRushMoveAnimSpeed = 650.00f;
    this->m_fRushMoveOverallStretchFactor = 1.00f;
    this->m_fRushMoveSpeed = 650.00f;
    this->m_fRushMoveMaxAngularSpeed = 100.00f;
    this->m_fRushStaminaConsumptionRate = 10.00f;
    this->m_RushStaminaConsumptionOverWeightRatio = NULL;
    this->m_fRushCooldownBurnAllStamina = 4.00f;
    this->m_fWantToRushInLockMoveTimeOut = 0.30f;
    this->m_fFreeMoveV1AnimSpeed = 100.00f;
    this->m_fFreeMoveV1OverallStretchFactor = 1.00f;
    this->m_fFreeMoveV2AnimSpeed = 350.00f;
    this->m_fFreeMoveV2OverallStretchFactor = 1.00f;
    this->m_fFreeMoveV1MinSpeed = 100.00f;
    this->m_fFreeMoveV1MaxSpeed = 150.00f;
    this->m_fFreeMoveV2MinSpeed = 350.00f;
    this->m_fFreeMoveV2MaxSpeed = 350.00f;
    this->m_fFreeMoveMaxAngularSpeed = 500.00f;
    this->m_fNorthSpeed = 180.00f;
    this->m_fSouthSpeed = 160.00f;
    this->m_fEastSpeed = 170.00f;
    this->m_fWestSpeed = 170.00f;
    this->m_fAnimNorthSpeed = 220.00f;
    this->m_fAnimSouthSpeed = 220.00f;
    this->m_fAnimEastSpeed = 220.00f;
    this->m_fAnimWestSpeed = 220.00f;
    this->m_fLockMoveMaxAngularSpeed = 300.00f;
    this->m_fAccelDelay = 0.50f;
    this->m_fDecelDelay = 0.20f;
    this->m_CurveAccelDecelDynamic = NULL;
    this->m_fV3LandingVelocityThreshold = 400.00f;
    this->m_fV2LandingVelocityThreshold = 170.00f;
    this->m_fV1LandingVelocityThreshold = 10.00f;
    this->m_WeightCategoryMobilityRatios[0] = 0.00f;
    this->m_WeightCategoryMobilityRatios[1] = 0.00f;
    this->m_WeightCategoryMobilityRatios[2] = 0.00f;
    this->m_WeightCategoryMobilityRatios[3] = 0.00f;
    this->m_WeightCategoryMobilityRatiosLockMove[0] = 0.00f;
    this->m_WeightCategoryMobilityRatiosLockMove[1] = 0.00f;
    this->m_WeightCategoryMobilityRatiosLockMove[2] = 0.00f;
    this->m_WeightCategoryMobilityRatiosLockMove[3] = 0.00f;
    this->m_bOverweightImpactFreemoveState = false;
}


