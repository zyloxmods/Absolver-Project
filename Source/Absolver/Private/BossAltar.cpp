#include "BossAltar.h"

ABossAltar::ABossAltar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_iCurrentLevel = 0;
    this->m_RespawnPoint = NULL;
    this->m_uiOuttroEndZone = 255;
}

void ABossAltar::OutroLevelLoaded() {
}

void ABossAltar::OutroCinematicCompleted() {
}

void ABossAltar::IntroCinematicCompleted() {
}

void ABossAltar::BPF_ReadyToLeaveCompletedSituation() {
}






