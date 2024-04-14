#include "ChangeQuadrantDB.h"

UChangeQuadrantDB::UChangeQuadrantDB() {
    this->m_fChangeQuadrantDuration = 0.25f;
    this->m_fChangeQuadrantReorientationDuration = 0.20f;
    this->m_ChangeQuadrantLayerDataOnStart = NULL;
    this->m_fTimeOfStartLayer = 0.10f;
    this->m_bUseAnimationOnMovement = false;
}


