#include "SpawnerGroup.h"
#include "Net/UnrealNetwork.h"

ASpawnerGroup::ASpawnerGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = true;
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
//    this->RemoteRole = ROLE_SimulatedProxy;
    this->m_uiOffsetMaxAICount = 0;
    this->m_uiOffsetUseProba = 0;
    this->m_iSituationLevelMin = 0;
    this->m_iSituationLevelOffsetMax = 0;
    this->m_iSituationLevelOffsetMin = 0;
    this->m_uiPriority = 0;
    this->m_bSpawnOnAltarInteraction = false;
    this->m_fRespawnCooldown = 2.00f;
    this->m_bIncludedInProcedural = true;
    this->m_uiNumberOfPlayerToSpawn = 0;
    this->m_iFixedLayer = -1;
}

void ASpawnerGroup::BPF_SpawnActors(int32 _ilevel, int32 _index, bool _bForce) {
}

void ASpawnerGroup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpawnerGroup, m_SpawnersUsed);
    DOREPLIFETIME(ASpawnerGroup, m_iFixedLayer);
}


