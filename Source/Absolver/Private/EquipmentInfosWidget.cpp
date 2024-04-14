#include "EquipmentInfosWidget.h"

UEquipmentInfosWidget::UEquipmentInfosWidget() {
    this->m_RarityDB = NULL;
    this->m_bCompareWithEquipped = true;
    this->m_eSlot = EEquipmentSlot::None;
    this->m_iItemSlot = -1;
}

void UEquipmentInfosWidget::BPF_SetRarityItemData(const FInventoryItem& _equipment) {
}

void UEquipmentInfosWidget::BPF_SetInventoryItem(const FInventoryItem& _equipment, EEquipmentSlot _eSlot, int32 _iItemSlot) {
}

void UEquipmentInfosWidget::BPF_SetGear(UBaseItemData* _item) {
}

void UEquipmentInfosWidget::BPF_SetCompareWithEquipped(bool _bCompareWithEquipped) {
}

bool UEquipmentInfosWidget::BPF_IsEquipped() {
    return false;
}


