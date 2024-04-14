#include "BindableMaterialWidget.h"

UBindableMaterialWidget::UBindableMaterialWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_MaterialInstance = NULL;
    this->FloatValue = 0.00f;
}

void UBindableMaterialWidget::BPF_SetMaterialInstance(UMaterialInstanceDynamic* _materialInstance) {
}


