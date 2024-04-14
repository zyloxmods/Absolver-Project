#include "ResourceSpawningComponent.h"

UResourceSpawningComponent::UResourceSpawningComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fPlayerDistanceMax = 5000.00f;
    this->m_fResourceDistanceMax = 10000.00f;
    this->m_fPlayerDistanceWeight = 0.50f;
    this->m_fResourceDistanceWeight = 0.50f;
}


