#include "TargetableWidgetUpdaterComponent.h"

UTargetableWidgetUpdaterComponent::UTargetableWidgetUpdaterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TargetWidgetToUse = NULL;
    this->m_fMaxDisplayDist = 800.00f;
}

void UTargetableWidgetUpdaterComponent::UnRegisterTargetActor(AActor* _actor) {
}

void UTargetableWidgetUpdaterComponent::RegisterTargetActor(AActor* _actor) {
}

UTargetableWidget* UTargetableWidgetUpdaterComponent::BPF_GetAssociatedWidget(AActor* _actor) {
    return NULL;
}


