#include "AltarInteractionComponent.h"
#include "Net/UnrealNetwork.h"

UAltarInteractionComponent::UAltarInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->m_AltarInteractionAnimation = NULL;
    this->m_AltarIdleLoopAnimation = NULL;
    this->m_AltarInteractionExitAnimation = NULL;
    this->m_AltarUnlockAnimation = NULL;
    this->m_eInteractionStatus = EAltarInteractionStatus::None;
}

void UAltarInteractionComponent::ServerSetInteractionStatus_Implementation(EAltarInteractionStatus _eNewStatus) {
}
bool UAltarInteractionComponent::ServerSetInteractionStatus_Validate(EAltarInteractionStatus _eNewStatus) {
    return true;
}

void UAltarInteractionComponent::OnRep_InteractionStatus(EAltarInteractionStatus _eNewStatus) {
}

void UAltarInteractionComponent::Multicast_UsedAltar_Implementation(AAltar* _altar) {
}

EAltarInteractionStatus UAltarInteractionComponent::BPF_GetInteractionStatus() const {
    return EAltarInteractionStatus::None;
}

void UAltarInteractionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAltarInteractionComponent, m_eInteractionStatus);
}


