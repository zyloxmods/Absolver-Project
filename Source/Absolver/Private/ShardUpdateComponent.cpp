#include "ShardUpdateComponent.h"

UShardUpdateComponent::UShardUpdateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ShardGlowCurve = NULL;
    this->m_SharsdOffsetCurve = NULL;
    this->m_ShardFullradius = NULL;
    this->m_SharsdRotationSpeed = NULL;
    this->m_fStaminaWheelAngle = -75.00f;
    this->m_fStaminaWheelAngleNotFull = -90.00f;
    this->m_fStaminaWheelRadiusNotFull = -3.00f;
    this->m_fCamPosDistance = 200.00f;
    this->m_fLerpIntensityFull = 16.00f;
    this->m_fLerpIntensityNotFull = 42.00f;
    this->m_fScaleNotFullLocked = 0.70f;
}

void UShardUpdateComponent::BPF_ShowShards() {
}

void UShardUpdateComponent::BPF_HideShards() {
}


