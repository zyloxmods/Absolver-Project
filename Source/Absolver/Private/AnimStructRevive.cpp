#include "AnimStructRevive.h"

FAnimStructRevive::FAnimStructRevive() {
    this->m_bIsInLoop1 = false;
    this->m_bIsInLoop2 = false;
    this->m_bIsOutro1 = false;
    this->m_bIsOutro2 = false;
    this->m_AnimIntro1 = NULL;
    this->m_AnimLoop1 = NULL;
    this->m_AnimOutro1 = NULL;
    this->m_AnimIntro2 = NULL;
    this->m_AnimLoop2 = NULL;
    this->m_AnimOutro2 = NULL;
    this->m_fLoopPlayRate1 = 0.00f;
    this->m_fLoopPlayRate2 = 0.00f;
    this->m_AnimReviveIn = NULL;
    this->m_AnimReviveLoop = NULL;
    this->m_AnimReviveSuccess = NULL;
    this->m_AnimReviveFail = NULL;
}

