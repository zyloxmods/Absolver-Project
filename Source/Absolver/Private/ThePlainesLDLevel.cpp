#include "ThePlainesLDLevel.h"

AThePlainesLDLevel::AThePlainesLDLevel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_uiEncouterZone = 0;
    this->m_uiMaxAICount = 15;
    this->m_ArchetypesInSituationDB = NULL;
    this->m_iMinMaxGenericWeapons = 1;
    this->m_iMaxMaxGenericWeapons = 1;
}



