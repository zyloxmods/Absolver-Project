#include "School.h"

FSchool::FSchool() {
    this->m_ID = 0;
    this->m_uiFSID = 0;
    this->m_Item1Data = NULL;
    this->m_Item2Data = NULL;
    this->m_MaskData = NULL;
    this->m_iMaskMaterialIndex = 0;
    this->m_Weapon = NULL;
    this->m_Mentor = 0;
    this->m_Platform = EPlatform::STEAM;
}

