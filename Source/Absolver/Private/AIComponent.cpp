#include "AIComponent.h"
#include "Net/UnrealNetwork.h"

UAIComponent::UAIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Spawner = NULL;
    this->m_FightingClass = NULL;
    this->m_Behavior = NULL;
    this->m_uiMatchMakingZone = 255;
}

void UAIComponent::Server_SetArchetypeData_Implementation(const FArchetypeDescription& _data, ECharacterSex _eSex) {
}
bool UAIComponent::Server_SetArchetypeData_Validate(const FArchetypeDescription& _data, ECharacterSex _eSex) {
    return true;
}

void UAIComponent::OnRep_Spawner() {
}

void UAIComponent::OnRep_Archetype() {
}

void UAIComponent::EquipmentLoadedCallback() {
}

int32 UAIComponent::BPF_GetArchetypeResource() {
    return 0;
}

void UAIComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAIComponent, m_Spawner);
    DOREPLIFETIME(UAIComponent, m_ArchetypeDescription);
    DOREPLIFETIME(UAIComponent, m_uiMatchMakingZone);
}


