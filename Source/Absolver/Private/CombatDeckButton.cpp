#include "CombatDeckButton.h"

UCombatDeckButton::UCombatDeckButton() {
    this->m_eWeaponFamily = EWeaponFamilies::None;
    this->m_iSlotIndex = -1;
}

void UCombatDeckButton::OnStatsChanged(EStatsAppliedMode _eStatsMode) {
}

void UCombatDeckButton::BPF_SetWeaponFamily(EWeaponFamilies _eFamily) {
}

void UCombatDeckButton::BPF_SetSlotIndex(int32 _iSlotIndex) {
}


