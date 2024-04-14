#include "TriggerTutorialUnlockingComponent.h"

UTriggerTutorialUnlockingComponent::UTriggerTutorialUnlockingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bShouldDisplayTuto = false;
}

void UTriggerTutorialUnlockingComponent::BPF_TriggerExitTutorialUnlocking(AController* _controller) {
}

void UTriggerTutorialUnlockingComponent::BPF_TriggerEnterTutorialUnlocking(AController* _controller) {
}

FName UTriggerTutorialUnlockingComponent::BPF_GetTutorialRowName() {
    return NAME_None;
}


