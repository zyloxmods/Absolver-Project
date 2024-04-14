#include "AnimStructHitted.h"

FAnimStructHitted::FAnimStructHitted() {
    this->m_bInGuard1 = false;
    this->m_bInGuard2 = false;
    this->m_fStunTime1 = 0.00f;
    this->m_fStunTime2 = 0.00f;
    this->m_eHeight1 = EHeight::High;
    this->m_eHeight2 = EHeight::High;
    this->m_eHittedLayer1 = EVariableWeightType::Nothing;
    this->m_eHittedLayer2 = EVariableWeightType::Nothing;
}

