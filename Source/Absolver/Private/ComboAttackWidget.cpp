#include "ComboAttackWidget.h"

UComboAttackWidget::UComboAttackWidget() {
    this->m_eEditingQuadrant = EQuadrantTypes::FrontLeft;
    this->m_QuadrantIcons[0] = NULL;
    this->m_QuadrantIcons[1] = NULL;
    this->m_QuadrantIcons[2] = NULL;
    this->m_QuadrantIcons[3] = NULL;
    this->m_StanceIcons[0] = NULL;
    this->m_StanceIcons[1] = NULL;
    this->m_StanceIcons[2] = NULL;
    this->m_StanceIcons[3] = NULL;
    this->m_iComboAttackIndex = 0;
}

void UComboAttackWidget::BPF_SetWeaponFamily(EWeaponFamilies _eWeaponFamily) {
}

void UComboAttackWidget::BPF_SetSharedCombo(USharedAttacksCombo* _combo) {
}

void UComboAttackWidget::BPF_SetEditingQuadrant(EQuadrantTypes _eQuadrant) {
}

EQuadrantTypes UComboAttackWidget::BPF_MirrorQuadrantIfNeeded(EQuadrantTypes _eQuadrant) {
    return EQuadrantTypes::FrontLeft;
}

bool UComboAttackWidget::BPF_IsMirror() {
    return false;
}

EWeaponFamilies UComboAttackWidget::BPF_GetWeaponFamily() const {
    return EWeaponFamilies::BareHands;
}

UTexture2D* UComboAttackWidget::BPF_GetStanceIcon(EQuadrantTypes _eQuadrant) const {
    return NULL;
}

UTexture2D* UComboAttackWidget::BPF_GetQuadrantIcon(EQuadrantTypes _eQuadrant) const {
    return NULL;
}

EQuadrantTypes UComboAttackWidget::BPF_GetEditingQuadrant() const {
    return EQuadrantTypes::FrontLeft;
}

void UComboAttackWidget::BPF_GetCombo(FAttacksCombo& _combo) {
}

FName UComboAttackWidget::BPF_GetAttack() {
    return NAME_None;
}


