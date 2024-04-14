#include "GameplayOptionsSave.h"

FGameplayOptionsSave::FGameplayOptionsSave() {
    this->m_bOnline = false;
    this->m_bSwitchTargetOnAttack = false;
    this->m_bInvertCameraXAxis = false;
    this->m_bInvertCameraYAxis = false;
    this->m_iGameplayOptions[0] = 0;
    this->m_iGameplayOptions[1] = 0;
    this->m_iGameplayOptions[2] = 0;
    this->m_iGameplayOptions[3] = 0;
    this->m_iGameplayOptions[4] = 0;
    this->m_iGameplayOptions[5] = 0;
    this->m_iGameplayOptions[6] = 0;
}

