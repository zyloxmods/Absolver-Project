#include "GatherChest.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "InteractionObjectComponent.h"
#include "LootComponent.h"
#include "Net/UnrealNetwork.h"
#include "SCNavModifierComponent.h"

AGatherChest::AGatherChest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
//    this->RemoteRole = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->m_bLooted = false;
    this->m_bOpen = false;
    this->m_iChestIndex = -1;
    this->m_iZoneIndex = -1;
    this->m_LootData = NULL;
    this->m_FragmentLootData = NULL;
    this->m_iDifficultyLevel = 0;
    this->m_uiTheme = 0;
    this->m_iDepth = 0;
    this->m_iSeedForLoots = 0;
    this->m_InteractionObjectComponent = CreateDefaultSubobject<UInteractionObjectComponent>(TEXT("InteractionObjectComponent"));
    this->m_LootComponent = CreateDefaultSubobject<ULootComponent>(TEXT("LootComponent"));
    this->m_InteractionTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionTrigger"));
    this->m_NavModifierComponent = CreateDefaultSubobject<USCNavModifierComponent>(TEXT("NavModifierComponent"));
    this->m_InteractionTrigger->SetupAttachment(RootComponent);
}

void AGatherChest::ServerOnChestOpen_Implementation(APlayerController* _controller) {
}
bool AGatherChest::ServerOnChestOpen_Validate(APlayerController* _controller) {
    return true;
}

void AGatherChest::OnChestLootedCallBack(APickUpActor* _pickedActor, AController* _picker) {
}

void AGatherChest::NetMulticastOnChestOpen_Implementation(APlayerController* _controller) {
}
bool AGatherChest::NetMulticastOnChestOpen_Validate(APlayerController* _controller) {
    return true;
}

void AGatherChest::BPF_SpawnLoots() {
}



void AGatherChest::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGatherChest, m_bOpen);
    DOREPLIFETIME(AGatherChest, m_iChestIndex);
    DOREPLIFETIME(AGatherChest, m_iZoneIndex);
    DOREPLIFETIME(AGatherChest, m_iSeedForLoots);
}


