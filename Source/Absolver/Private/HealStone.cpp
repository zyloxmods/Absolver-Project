#include "HealStone.h"
#include "InteractionObjectComponent.h"
#include "Net/UnrealNetwork.h"

AHealStone::AHealStone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
//    this->RemoteRole = ROLE_SimulatedProxy;
    this->m_ePlayerCountAtStart = EPlayerNumber::One;
    this->m_InteractionComp = CreateDefaultSubobject<UInteractionObjectComponent>(TEXT("InteractionComponent"));
}

void AHealStone::UseInteractiveObject(APlayerController* _controller) {
}

void AHealStone::OnRep_StoneConfig() {
}

void AHealStone::OnRep_PlayerNum() {
}

int32 AHealStone::BPF_GetRemainingStacks() const {
    return 0;
}

int32 AHealStone::BPF_GetGleamCost() const {
    return 0;
}




void AHealStone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHealStone, m_StoneConfigs);
    DOREPLIFETIME(AHealStone, m_ePlayerCountAtStart);
}


