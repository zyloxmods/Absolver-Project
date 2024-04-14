#include "ProceduralStreamingManager.h"
#include "Net/UnrealNetwork.h"

AProceduralStreamingManager::AProceduralStreamingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
//    this->RemoteRole = ROLE_SimulatedProxy;
}

void AProceduralStreamingManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AProceduralStreamingManager, m_StreamingActionsPerController);
}


