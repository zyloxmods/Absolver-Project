#include "GatherTrap.h"
#include "Net/UnrealNetwork.h"

AGatherTrap::AGatherTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
//    this->RemoteRole = ROLE_SimulatedProxy;
    this->m_bActive = false;
    this->m_iTrapIndex = -1;
    this->m_iZoneIndex = -1;
}

void AGatherTrap::BPF_Use() {
}

void AGatherTrap::BPF_SetActive(bool _bActive) {
}

bool AGatherTrap::BPF_IsActive() {
    return false;
}



void AGatherTrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGatherTrap, m_bActive);
    DOREPLIFETIME(AGatherTrap, m_iTrapIndex);
    DOREPLIFETIME(AGatherTrap, m_iZoneIndex);
}


