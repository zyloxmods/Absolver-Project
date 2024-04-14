#include "ProceduralPathBlockers.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AProceduralPathBlockers::AProceduralPathBlockers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
//    this->RemoteRole = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->m_eStateBeforeLockDown = EBlockerSate::None;
    this->m_iRoomLinked = -1;
    this->m_WaitForAllPlayersTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("WaitForAllPlayersTrigger"));
    this->m_InteractionTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionTrigger"));
    this->m_eAnchor = ERoomAnchor::North;
    this->m_bVisited = false;
    this->m_InteractionTrigger->SetupAttachment(RootComponent);
    this->m_WaitForAllPlayersTrigger->SetupAttachment(RootComponent);
}

void AProceduralPathBlockers::OnWaitForPlayersTriggerEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex) {
}

void AProceduralPathBlockers::OnWaitForPlayersTriggerBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

void AProceduralPathBlockers::OnRoomWaitingToBeClearedUpdated(int32 _iRoom) {
}

void AProceduralPathBlockers::On_RepState() {
}

bool AProceduralPathBlockers::BPF_WasVisited() const {
    return false;
}

bool AProceduralPathBlockers::BPF_IsLockedByTrials() const {
    return false;
}

bool AProceduralPathBlockers::BPF_IsLockedByKey() const {
    return false;
}

void AProceduralPathBlockers::BPF_GetKeysNeeded(TArray<UBaseItemData*>& _OutKeys) const {
}

void AProceduralPathBlockers::BPF_ChangeState(EBlockerSate _eNewState, bool _bWithAllPlayers, bool _bFromInteraction, bool _bPlaySound) {
}

bool AProceduralPathBlockers::BPF_CanBeOpened() const {
    return false;
}


void AProceduralPathBlockers::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AProceduralPathBlockers, m_DoorStateInfo);
    DOREPLIFETIME(AProceduralPathBlockers, m_eStateBeforeLockDown);
    DOREPLIFETIME(AProceduralPathBlockers, m_PlayersWaitingForDoor);
    DOREPLIFETIME(AProceduralPathBlockers, m_bVisited);
}


