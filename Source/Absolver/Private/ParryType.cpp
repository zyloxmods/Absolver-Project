#include "ParryType.h"

FParryType::FParryType() {
    this->m_eParryDirection = EParryDirection::Front;
    this->m_eParrySide = EParrySide::Left;
    this->m_eParryHeight = EParryHeight::High;
}

