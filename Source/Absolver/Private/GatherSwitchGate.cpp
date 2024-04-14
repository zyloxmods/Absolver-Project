#include "GatherSwitchGate.h"
#include "Net/UnrealNetwork.h"

AGatherSwitchGate::AGatherSwitchGate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bDoorClosed = false;
}

void AGatherSwitchGate::NetMulticastOnHostMigration_Implementation() {
}
bool AGatherSwitchGate::NetMulticastOnHostMigration_Validate() {
    return true;
}

void AGatherSwitchGate::BPF_Trigger() {
}

bool AGatherSwitchGate::BPF_IsInsideTrigger(ESwitchGateEXitType _eExit, AFightingCharacter* _char) {
    return false;
}

void AGatherSwitchGate::BPF_ExitTriggerBy(ESwitchGateEXitType _eExit, AFightingCharacter* _char) {
}

void AGatherSwitchGate::BPF_EnterTriggerBy(ESwitchGateEXitType _eExit, AFightingCharacter* _char) {
}


void AGatherSwitchGate::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGatherSwitchGate, m_bDoorClosed);
}


