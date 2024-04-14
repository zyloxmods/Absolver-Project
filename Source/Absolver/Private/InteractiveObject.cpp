#include "InteractiveObject.h"
#include "InteractionObjectComponent.h"

AInteractiveObject::AInteractiveObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_InteractionObjectComponent = CreateDefaultSubobject<UInteractionObjectComponent>(TEXT("InteractionObjectComponent"));
}

void AInteractiveObject::UseInteractiveObjectFailed(APlayerController* _controller) {
}

void AInteractiveObject::UseInteractiveObject(APlayerController* _controller) {
}

UInteractionObjectComponent* AInteractiveObject::BPF_GetInteractionObjectComponent() {
    return NULL;
}

void AInteractiveObject::BPF_Deactivate() {
}




