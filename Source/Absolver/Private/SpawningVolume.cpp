#include "SpawningVolume.h"

ASpawningVolume::ASpawningVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ShapeComponent = NULL;
    this->m_bAllowSpawnIfCharacterOverlaps = true;
    this->m_bSpawnIfNothingUnder = true;
    this->m_fSecurityMargin = 30.00f;
}


