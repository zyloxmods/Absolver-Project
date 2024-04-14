#include "SwitchIdleType.h"

FSwitchIdleType::FSwitchIdleType() {
    this->m_bRegularWithReorientation = false;
    this->m_bRegularWithoutReorientation = false;
    this->m_bAttackEarlyBlendOut = false;
    this->m_bParried = false;
    this->m_bCancel = false;
    this->m_bChangeQuadrant = false;
    this->m_bAttackPreview = false;
    this->m_bNone = false;
}

