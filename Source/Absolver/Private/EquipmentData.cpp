#include "EquipmentData.h"

UEquipmentData::UEquipmentData() {
    this->m_bUseSkinTone = false;
    this->m_ParticleSystem = NULL;
    this->m_fFXFloatParameter = 0.00f;
    this->m_bUseBoneData = false;
    this->m_refBoneName = TEXT("head");
    this->m_bUseGenderedMetaballs = false;
    this->m_eMirrorAxis = EMetaballMirrorAxis::VE_None;
}


