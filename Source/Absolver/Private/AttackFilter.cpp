#include "AttackFilter.h"

FAttackFilter::FAttackFilter() {
    this->m_eStartQuadrant = EQuadrantTypes::FrontLeft;
    this->m_eEndQuadrant = EQuadrantTypes::FrontLeft;
    this->m_eWeaponFamily = EWeaponFamilies::BareHands;
    this->m_bIsAlternativeAttack = false;
    this->m_bExcludeUsedAttacks = false;
    this->m_bIgnoreUknownAttacks = false;
    this->m_bIgnoreLearningAttacks = false;
    this->m_bIgnoreUnlockedAttacks = false;
    this->m_bExcludeOtherWeaponFamilies = false;
    this->m_bNewAttacksOnly = false;
    this->m_iAttackStyle = 0;
    this->m_iSpecialAbilityMask = 0;
    this->m_bIgnoreMirrored = false;
    this->m_eLearningState = EAttackLearningState::Unknown;
}

