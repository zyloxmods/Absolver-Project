#include "CameraNodeStruct.h"

FCameraNodeStruct::FCameraNodeStruct() {
    this->m_fFov = 0.00f;
    this->m_fRefDampingFactor = 0.00f;
    this->m_fHorizontalSpeed = 0.00f;
    this->m_fVerticalSpeed = 0.00f;
    this->m_bFixedYaw = false;
    this->m_bFixedPitch = false;
    this->m_fFixedYaw = 0.00f;
    this->m_fFixedPitch = 0.00f;
    this->m_fAboveLimitPitch = 0.00f;
    this->m_fBelowLimitPitch = 0.00f;
}

