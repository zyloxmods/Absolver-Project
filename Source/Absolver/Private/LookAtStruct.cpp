#include "LookAtStruct.h"

FLookAtStruct::FLookAtStruct() {
    this->m_eSaveBone = ESaveBone::Attack1_LeftLeg;
    this->m_fMaxWeight = 0.00f;
    this->TargetZOffset = 0.00f;
    this->YawMin = 0.00f;
    this->YawMax = 0.00f;
    this->YawRatio = 0.00f;
    this->PitchMin = 0.00f;
    this->PitchMax = 0.00f;
    this->PitchRatio = 0.00f;
    this->Velocity = 0.00f;
}

