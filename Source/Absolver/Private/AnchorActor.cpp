#include "AnchorActor.h"

AAnchorActor::AAnchorActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_eAnchor = ERoomAnchor::North;
}


