#include "DungeonBuilder.h"

ADungeonBuilder::ADungeonBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ObjectiveCooldowns[0] = 0;
    this->m_ObjectiveCooldowns[1] = 0;
    this->m_ObjectiveCooldowns[2] = 0;
    this->m_ObjectiveCooldowns[3] = 0;
    this->m_ObjectiveCooldowns[4] = 0;
    this->m_ObjectiveCooldowns[5] = 0;
    this->m_LootData = NULL;
    this->m_FragmentLootData = NULL;
    this->m_WaveObjConfig = NULL;
    this->m_StatueWaveObjConfig = NULL;
    this->m_iSeed = -1;
    this->m_bOverrideSeed = false;
    this->m_iMaxDepth = -1;
}

void ADungeonBuilder::PreviewDungeon() {
}

void ADungeonBuilder::CleanPreview() {
}


