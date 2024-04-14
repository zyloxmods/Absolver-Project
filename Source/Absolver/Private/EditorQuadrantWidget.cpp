#include "EditorQuadrantWidget.h"

UEditorQuadrantWidget::UEditorQuadrantWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_AltCard = NULL;
    this->m_eAltAttackDirection = ENavigationDirections::None;
}

void UEditorQuadrantWidget::BPF_ReorientWidget(UWidget* _widgetReoriented) {
}


