#include "SaveStateComponent.h"

USaveStateComponent::USaveStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->ResetOnCreate = false;
}


