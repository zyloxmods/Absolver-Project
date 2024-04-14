#include "PickUpActor.h"
#include "InteractionObjectComponent.h"

APickUpActor::APickUpActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_InteractionObjectComponent = CreateDefaultSubobject<UInteractionObjectComponent>(TEXT("InteractionObjectComponent"));
    this->m_DataAsset = NULL;
    this->m_LootComponent = NULL;
}

void APickUpActor::OnPickedUp(APlayerController* _playerController) {
}



