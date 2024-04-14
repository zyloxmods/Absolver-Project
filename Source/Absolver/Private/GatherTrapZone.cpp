#include "GatherTrapZone.h"

AGatherTrapZone::AGatherTrapZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
//    this->RemoteRole = ROLE_SimulatedProxy;
    this->m_eSpawnMode = ETrapZoneSpawnMode::OneRandomGroup;
    this->m_EmptyFactor = 0;
    this->m_EmptyGroupFactor = 0;
}


