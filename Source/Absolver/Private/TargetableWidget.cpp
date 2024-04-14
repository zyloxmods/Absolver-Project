#include "TargetableWidget.h"

UTargetableWidget::UTargetableWidget() {
    this->m_bNotifyPawnChanged = true;
}

void UTargetableWidget::BPF_SetRelatedActor(AActor* _actor) {
}

AActor* UTargetableWidget::BPF_GetRelatedActor() {
    return NULL;
}






