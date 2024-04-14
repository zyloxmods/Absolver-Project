#include "AnimStructMoveTransition.h"

FAnimStructMoveTransition::FAnimStructMoveTransition() {
    this->m_eTransitionType1 = EMoveTransitionType::StopV1;
    this->m_fStartRatio1 = 0.00f;
    this->m_fStretchFactor1 = 0.00f;
    this->m_bInterrupted1 = false;
    this->m_eTransitionType2 = EMoveTransitionType::StopV1;
    this->m_fStartRatio2 = 0.00f;
    this->m_fStretchFactor2 = 0.00f;
    this->m_bInterrupted2 = false;
}

