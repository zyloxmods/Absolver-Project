#include "VariableWeightStateDescriptorDB.h"

UVariableWeightStateDescriptorDB::UVariableWeightStateDescriptorDB() {
    this->m_eStateID = EVW_MasterStates::None;
    this->m_iVariableWeightLayerID = 0;
    this->m_bDisplayInDebug = true;
}

int32 UVariableWeightStateDescriptorDB::GetChildrenNum() {
    return 0;
}

UVariableWeightStateDescriptorDB* UVariableWeightStateDescriptorDB::GetChild(int32 _iIndex) {
    return NULL;
}


