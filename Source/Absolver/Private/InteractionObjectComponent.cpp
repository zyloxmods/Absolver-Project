#include "InteractionObjectComponent.h"

UInteractionObjectComponent::UInteractionObjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_iNbKeysNeeded = 0;
    this->m_ProgressionDoorData = NULL;
    this->m_bIsUsable = true;
    this->m_bUseLockedText = false;
}

void UInteractionObjectComponent::BPF_SetMainDetectionPrimitive(UPrimitiveComponent* _component) {
}

void UInteractionObjectComponent::BPF_SetIsUsable(bool _bCanUse) {
}

void UInteractionObjectComponent::BPF_SetInteractionTextStruct(const FInteractionTextStruct& _struct) {
}

bool UInteractionObjectComponent::BPF_IsUsingLockedText() const {
    return false;
}

bool UInteractionObjectComponent::BPF_IsUsable() {
    return false;
}

UProgressionDoorData* UInteractionObjectComponent::BPF_GetProgressionDoorData() const {
    return NULL;
}

FText UInteractionObjectComponent::BPF_GetLockedText() const {
    return FText::GetEmpty();
}

FInteractionTextStruct UInteractionObjectComponent::BPF_GetInteractionTextStruct() const {
    return FInteractionTextStruct{};
}


