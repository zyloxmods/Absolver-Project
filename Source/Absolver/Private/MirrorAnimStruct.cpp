#include "MirrorAnimStruct.h"

FMirrorAnimStruct::FMirrorAnimStruct() {
    this->m_eMirrorBehavior = EMirrorAnimBehavior::Twins;
    this->m_eMirrorRotationAxis = ESimpleAxis::X;
    this->m_eMirrorTranslationPlaneAxis = EPlaneAxis::XY;
    this->m_bIsSocket = false;
}

