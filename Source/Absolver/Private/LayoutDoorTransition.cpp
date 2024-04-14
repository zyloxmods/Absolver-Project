#include "LayoutDoorTransition.h"
#include "PVECutsceneInteractionComponent.h"

ALayoutDoorTransition::ALayoutDoorTransition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_InteractionComponent = CreateDefaultSubobject<UPVECutsceneInteractionComponent>(TEXT("InteractionObjectComponent"));
}

void ALayoutDoorTransition::UseInteractiveObject(APlayerController* _controller) {
}


