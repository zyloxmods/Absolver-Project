#include "SchoolMember.h"

FSchoolMember::FSchoolMember() {
    this->m_iXP = 0;
    this->m_iScore = 0;
    this->m_iGlobalRank = 0;
    this->m_bIsValidForSchoolRewards = false;
    this->m_iSchoolRank = 0;
    this->m_ePlatform = EPlatform::STEAM;
    this->m_uiSchoolID = 0;
}

