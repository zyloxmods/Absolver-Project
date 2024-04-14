#include "ComboWidget.h"

UComboWidget::UComboWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_AltMiniCard = NULL;
    this->m_eQuadrant = EQuadrantTypes::FrontLeft;
    this->m_DataAsset = NULL;
    this->m_ImagesRegularAttack = NULL;
    this->m_MinicardsClass = NULL;
}

void UComboWidget::BPF_InitAltCard(UComboMiniCard* _card) {
}

void UComboWidget::BPF_ActualiseMinicards() {
}




