#include "MappableInputStruct.h"

FMappableInputStruct::FMappableInputStruct() {
    this->m_eRemappingAllowedInputType = ERemappingAllowedInputTypes::KeyboardMouse;
    this->m_bIsAxisMappingAllowed = false;
    this->m_bCheckDuplicateKey = false;
    this->m_bForceDisplayAsSingleField = false;
    this->m_fKeyToAxisMultScaleFactor = 0.00f;
}

