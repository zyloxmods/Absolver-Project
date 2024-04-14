#include "AnimStructAttack.h"

FAnimStructAttack::FAnimStructAttack() {
    this->m_bIsAttackFullyBlended1 = false;
    this->m_bIsAttackFullyBlended2 = false;
    this->m_fAttackPlayrate1 = 0.00f;
    this->m_fAttackPlayrate2 = 0.00f;
    this->m_WantedAttackAnim1 = NULL;
    this->m_WantedAttackAnim2 = NULL;
    this->m_bStartBlendOut1 = false;
    this->m_bStartBlendOut2 = false;
}

