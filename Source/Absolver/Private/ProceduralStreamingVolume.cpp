#include "ProceduralStreamingVolume.h"

AProceduralStreamingVolume::AProceduralStreamingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->m_AssociatedPlayerStart = NULL;
}


