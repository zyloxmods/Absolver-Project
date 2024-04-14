#include "AnimDrivenMovementComponent.h"

UAnimDrivenMovementComponent::UAnimDrivenMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bUseDisplacement = true;
    this->m_fDisplacementCoeff = 1.00f;
    this->m_bUseRotation = true;
    this->m_fRotationCoeff = 1.00f;
}


