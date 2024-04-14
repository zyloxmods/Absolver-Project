#include "SpecialAttackStruct.h"

FSpecialAttackStruct::FSpecialAttackStruct() {
    this->m_SpecialAttackUseCondition = NULL;
    this->m_eQuadrant = EQuadrantTypes::FrontLeft;
    this->m_eWeaponFamily = EWeaponFamilies::BareHands;
    this->m_bSetAttackCooldownAfterUse = false;
}

