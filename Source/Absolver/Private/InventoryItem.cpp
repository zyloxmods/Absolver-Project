#include "InventoryItem.h"

FInventoryItem::FInventoryItem() {
    this->m_iItemCount = 0;
    this->m_bIsEquipped = false;
    this->m_iEquippedItemSlot = 0;
    this->m_fDurability = 0.00f;
    this->m_bBroken = false;
    this->m_bIsNew = false;
}

