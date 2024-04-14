#include "CharacterStats.h"

FCharacterStats::FCharacterStats() {
    this->m_iSparePrestigePoints = 0;
    this->m_iSpareStatPoints = 0;
    this->m_StatsPointDistribution[0] = 0;
    this->m_StatsPointDistribution[1] = 0;
    this->m_StatsPointDistribution[2] = 0;
    this->m_StatsPointDistribution[3] = 0;
    this->m_StatsPointDistribution[4] = 0;
    this->m_iPrestigeGrade = 0;
    this->m_iPrestigeLevel = 0;
    this->m_iGlobalLevel = 0;
    this->m_iGlobalXP = 0;
    this->m_iGameModeXP = 0;
    this->m_iGameModeLevel = 0;
    this->m_iSchoolXP = 0;
    this->m_iFragments = 0;
    this->m_iResources = 0;
    this->m_iResourcesLvl = 0;
}

