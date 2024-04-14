#include "SpecialAttackData.h"

USpecialAttackData::USpecialAttackData() {
    this->m_AvoidPictos[0] = NULL;
    this->m_AvoidPictos[1] = NULL;
    this->m_AvoidPictos[2] = NULL;
    this->m_AvoidPictos[3] = NULL;
    this->m_AvoidPictos[4] = NULL;
    this->m_AvoidPictos[5] = NULL;
    this->m_AvoidPictos[6] = NULL;
    this->m_ParryPictos[0] = NULL;
    this->m_ParryPictos[1] = NULL;
    this->m_GuardBreakPicto = NULL;
    this->m_InterruptPicto = NULL;
    this->m_AbsorbPicto = NULL;
}

UTexture2D* USpecialAttackData::GetParryPicto(EParrySide _eParryType) {
    return NULL;
}

UTexture2D* USpecialAttackData::GetAvoidPicto(EAvoidType _eAvoidType) {
    return NULL;
}


