#include "MarkedComponent.h"
#include "Net/UnrealNetwork.h"

UMarkedComponent::UMarkedComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->m_Marked = false;
}

void UMarkedComponent::OnRep_Marked() {
}

void UMarkedComponent::BPF_SetMarked(bool _bValue) {
}

void UMarkedComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMarkedComponent, m_Marked);
}


