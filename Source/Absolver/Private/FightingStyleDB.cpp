#include "FightingStyleDB.h"

UFightingStyleDB::UFightingStyleDB() {
    this->m_AttributeScales[0] = EAttributeScales::S;
    this->m_AttributeScales[1] = EAttributeScales::S;
    this->m_AttributeScales[2] = EAttributeScales::S;
    this->m_AttributeScales[3] = EAttributeScales::S;
    this->m_AttributeScales[4] = EAttributeScales::S;
    this->m_eSpecialAbility = ESpecialAbilities::None;
}

EAttributeScales UFightingStyleDB::BPF_GetAttributeScale(const EDistributionStatType& _eAttribute) const {
    return EAttributeScales::S;
}


