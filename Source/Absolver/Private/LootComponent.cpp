#include "LootComponent.h"

ULootComponent::ULootComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_PickUpClass = NULL;
    this->m_bShowPickupMenu = true;
}

APickUpActor* ULootComponent::BPF_SpawnLoot() {
    return NULL;
}


