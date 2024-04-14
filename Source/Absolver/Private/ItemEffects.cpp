#include "ItemEffects.h"

FItemEffects::FItemEffects() {
    this->m_eEffectTarget = EEffectTarget::Self;
    this->m_EffectData = NULL;
    this->m_iAOEWantedRelations = 0;
}

