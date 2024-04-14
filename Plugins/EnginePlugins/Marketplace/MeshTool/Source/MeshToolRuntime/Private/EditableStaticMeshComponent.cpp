#include "EditableStaticMeshComponent.h"

UEditableStaticMeshComponent::UEditableStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ImportVersion = 0;
}


