#include "ComboScrollItem.h"

UComboScrollItem::UComboScrollItem() {
}

void UComboScrollItem::BPF_OnScrollBoxButtonUnFocused() {
}

void UComboScrollItem::BPF_OnScrollBoxButtonFocused() {
}

void UComboScrollItem::BPF_OnButtonClicked() {
}

bool UComboScrollItem::BPF_IsCurrentAttack() {
    return false;
}

bool UComboScrollItem::BPF_IsAttackAlreadyUsed() {
    return false;
}

EQuadrantTypes UComboScrollItem::BPF_GetRealQuadrant(EQuadrantTypes _eQuadrant) {
    return EQuadrantTypes::FrontLeft;
}

UEditorCard* UComboScrollItem::BPF_GetCard() const {
    return NULL;
}

FName UComboScrollItem::BPF_GetAttackName() const {
    return NAME_None;
}

void UComboScrollItem::BPF_GetAttackData(FAttackDataRow& _AttackData) {
}








