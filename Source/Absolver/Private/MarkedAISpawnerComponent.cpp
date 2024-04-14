#include "MarkedAISpawnerComponent.h"
#include "Net/UnrealNetwork.h"

UMarkedAISpawnerComponent::UMarkedAISpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->m_bActive = false;
    this->m_bAvailableForMarked = true;
}

bool UMarkedAISpawnerComponent::BPF_IsMarking() {
    return false;
}

bool UMarkedAISpawnerComponent::BPF_IsAvailableForMarked() const {
    return false;
}

void UMarkedAISpawnerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMarkedAISpawnerComponent, m_bActive);
}


