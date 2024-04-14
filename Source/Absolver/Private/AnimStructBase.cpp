#include "AnimStructBase.h"

FAnimStructBase::FAnimStructBase() {
    this->m_bInProgress1 = false;
    this->m_bInProgress2 = false;
    this->m_bInProgress1Or2 = false;
    this->m_Animation1 = NULL;
    this->m_Animation2 = NULL;
    this->m_bMirror1 = false;
    this->m_bMirror2 = false;
}

