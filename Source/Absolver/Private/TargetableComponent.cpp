#include "TargetableComponent.h"

UTargetableComponent::UTargetableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bShouldDisplayBP = false;
}

void UTargetableComponent::BPF_SetShouldDisplay(bool _bSHould) {
}


