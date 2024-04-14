#include "AISpawner.h"
#include "Components/SceneComponent.h"
#include "SCSaveGameComponent.h"

AAISpawner::AAISpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->m_SpawningClass = NULL;
    this->m_EquipmentSelection = NULL;
    this->m_eSex = ECharacterSex::None;
    this->m_eFaction = EFactionsEnums::Count;
    this->m_fRespawnTime = 0.10f;
    this->m_fSpawnDelay = 0.00f;
    this->m_bCanRespawn = true;
    this->m_bUseRespawnFxAtSpawn = false;
    this->m_eFirstSpawnMethod = EFirstSpawnMethod::OnAnEvent;
    this->m_RootComp = (USceneComponent*)RootComponent;
    this->m_ZoneOverride = NULL;
    this->m_SaveGameComponent = CreateDefaultSubobject<USCSaveGameComponent>(TEXT("SaveComponent"));
    this->m_bIgnoreAlertPropagation = false;
    this->m_bLooted = false;
}

void AAISpawner::OnEndPlayAI(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason) {
}

void AAISpawner::BPF_WantsSpawn(UArchetypeAsset* _archetype, int32 _ilevel, int32 _iAIIdxInSpawner) {
}

void AAISpawner::BPF_SetCanRespawn(bool _canRespawn) {
}

bool AAISpawner::BPF_HasSpawnedAI() const {
    return false;
}




