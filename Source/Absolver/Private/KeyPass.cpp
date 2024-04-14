#include "KeyPass.h"
#include "InteractionObjectComponent.h"
#include "LootComponent.h"
#include "Net/UnrealNetwork.h"

AKeyPass::AKeyPass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
//    this->RemoteRole = ROLE_SimulatedProxy;
    this->m_InteractionObjectComponent = CreateDefaultSubobject<UInteractionObjectComponent>(TEXT("InteractionObjectComponent"));
    this->m_LootComponent = CreateDefaultSubobject<ULootComponent>(TEXT("LootComponent"));
    this->m_bCollected = false;
    this->m_bForAllPlayers = true;
}

void AKeyPass::UseInteractiveObject(APlayerController* _controller) {
}

void AKeyPass::On_RepCollected() {
}



void AKeyPass::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AKeyPass, m_bCollected);
}


