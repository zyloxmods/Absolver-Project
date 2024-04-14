#include "SCProceduralControllerComponent.h"
#include "Net/UnrealNetwork.h"

USCProceduralControllerComponent::USCProceduralControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USCProceduralControllerComponent::ServerUnLockedDoor_Implementation(AProceduralPathBlockers* _blocker) {
}
bool USCProceduralControllerComponent::ServerUnLockedDoor_Validate(AProceduralPathBlockers* _blocker) {
    return true;
}

void USCProceduralControllerComponent::ServerRequestCutsceneLaunch_Implementation(ATeamSequenceActor* _sequence) {
}
bool USCProceduralControllerComponent::ServerRequestCutsceneLaunch_Validate(ATeamSequenceActor* _sequence) {
    return true;
}

void USCProceduralControllerComponent::OnRep_GameState() {
}

void USCProceduralControllerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USCProceduralControllerComponent, m_GameState);
}


