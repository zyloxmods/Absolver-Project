#include "RelationGroupWidget.h"

URelationGroupWidget::URelationGroupWidget() {
    this->m_bNotifyPawnChanged = true;
    this->m_eRelationshipType = ERelationshipTypes::None;
    this->m_TitleImageResources[0] = NULL;
    this->m_TitleImageResources[1] = NULL;
    this->m_TitleImageResources[2] = NULL;
    this->m_TitleImageResources[3] = NULL;
    this->m_TitleImageResources[4] = NULL;
    this->m_TitleImageResources[5] = NULL;
}

void URelationGroupWidget::OnActorEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayerReason) {
}

void URelationGroupWidget::BPF_SetAndBuildNativeWidget(TArray<URelationGroupWidgetItem*> _memberHUDContainers) {
}

ERelationshipTypes URelationGroupWidget::BPF_GetRelationshipType() const {
    return ERelationshipTypes::Enemy;
}


