#include "ResourcesGameState.h"
#include "Net/UnrealNetwork.h"

AResourcesGameState::AResourcesGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AResourcesGameState::OnRepActiveNewArea() {
}

void AResourcesGameState::MultiCastResetResourceAreaDirty_Implementation(bool _bExpectActive) {
}

void AResourcesGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AResourcesGameState, m_TimerNewAreaActivation);
    DOREPLIFETIME(AResourcesGameState, m_ActiveResourceArea);
}


