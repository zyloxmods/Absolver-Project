#include "InventorySearchFilter.h"

FInventorySearchFilter::FInventorySearchFilter() {
    this->m_eSlot = EEquipmentSlot::Mask;
    this->m_bOutfitsOnly = false;
    this->m_eWeaponFamily = EWeaponFamilies::BareHands;
    this->m_bOnlyNewItems = false;
    this->m_bIgnoreMentoringItems = false;
}

