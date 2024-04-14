#include "AttackInfosWidget.h"

UAttackInfosWidget::UAttackInfosWidget() {
    this->m_bPreviewOnlyEquippedWeapon = true;
    this->m_eStatMode = EStatsAppliedMode::Current;
    this->m_bIsCompareDataValid = false;
    this->m_eWeaponFamily = EWeaponFamilies::BareHands;
}

void UAttackInfosWidget::BPF_SetAttack(FName _attack, bool _bIsMirror, FName _compareWith, bool _bIsCompareMirror, EWeaponFamilies _eWeaponFamily) {
}


