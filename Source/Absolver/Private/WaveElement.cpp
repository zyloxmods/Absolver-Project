#include "WaveElement.h"

FWaveElement::FWaveElement() {
    this->m_iTotalNum[0] = 0;
    this->m_iTotalNum[1] = 0;
    this->m_iTotalNum[2] = 0;
    this->m_iSpawnNum[0] = 0;
    this->m_iSpawnNum[1] = 0;
    this->m_iSpawnNum[2] = 0;
    this->m_iMaxSimultaneous[0] = 0;
    this->m_iMaxSimultaneous[1] = 0;
    this->m_iMaxSimultaneous[2] = 0;
    this->m_Archetype = NULL;
}

