#include "BaseItemData.h"

UBaseItemData::UBaseItemData() {
    this->m_EquipmentSlot = EEquipmentSlot::Mask;
    this->m_bIsAResource = false;
    this->m_bHasDurability = false;
    this->m_bIsUnique = false;
    this->m_bCanBeSalvaged = true;
    this->m_bCanBeDyed = true;
}


