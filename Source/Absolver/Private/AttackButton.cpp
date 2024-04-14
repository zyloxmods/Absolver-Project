#include "AttackButton.h"

UAttackButton::UAttackButton() {
    this->m_eCurrentQuadrant = EQuadrantTypes::None;
    this->m_eCurrentWeaponFamily = EWeaponFamilies::None;
    this->m_iCurrentComboIndex = -1;
    this->m_bIsMirror = false;
}

void UAttackButton::BPF_SetAttackData(const FName& _attack, EQuadrantTypes _eQuadrant, EWeaponFamilies _eCurrentWeaponFamily, int32 _iCurrentComboIndex, FName _currentAttackName, bool _bIsMirror) {
}


