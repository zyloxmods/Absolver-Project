#include "SchoolMemberReplicatedInfos.h"

FSchoolMemberReplicatedInfos::FSchoolMemberReplicatedInfos() {
    this->m_MaskData = NULL;
    this->m_iPlayerScore = 0;
    this->m_iSchoolTopScore = 0;
    this->m_iSchoolTotalScore = 0;
    this->m_uiFightingStyle = 0;
    this->m_iPlayerSchoolRank = 0;
    this->m_iPlayerGlobalRank = 0;
    this->m_iSchoolTopRank = 0;
    this->m_iSchoolTotalRank = 0;
    this->m_SchoolID = 0;
    this->m_bIsInSchoolChallenge = false;
    this->m_bReplicated = false;
}

