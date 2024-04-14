#include "MovementMode.h"

FMovementMode::FMovementMode() {
    this->m_bNone = false;
    this->m_bWalking = false;
    this->m_bNavWalking = false;
    this->m_bFalling = false;
    this->m_bSwimming = false;
    this->m_bFlying = false;
    this->m_bCustom = false;
}

