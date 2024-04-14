#include "CameraLagStruct.h"

UCameraLagStruct::UCameraLagStruct() {
    this->m_bEnableInputLag = true;
    this->m_fInputLagGlobalMultiplier = 1.00f;
    this->m_fInputLagGlobalMultiplierMax = 4.00f;
    this->m_fInputLagGlobalMultiplierMin = 0.60f;
    this->m_fInputLagMouseMultiplier = 1.50f;
}


