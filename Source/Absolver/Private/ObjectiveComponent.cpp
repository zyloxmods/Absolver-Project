#include "ObjectiveComponent.h"

UObjectiveComponent::UObjectiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bObjectiveActivated = false;
    this->m_bObjectiveCompleted = false;
}

bool UObjectiveComponent::BPF_IsCompleted() {
    return false;
}

void UObjectiveComponent::BPF_DesactivateObjective() {
}

void UObjectiveComponent::BPF_CompleteObjective() {
}

void UObjectiveComponent::BPF_ActivateObjective() {
}


