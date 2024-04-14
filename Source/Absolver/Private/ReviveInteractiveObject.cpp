#include "ReviveInteractiveObject.h"
#include "Net/UnrealNetwork.h"

AReviveInteractiveObject::AReviveInteractiveObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
//    this->RemoteRole = ROLE_SimulatedProxy;
}

void AReviveInteractiveObject::OnRep_ReviveActor() {
}

void AReviveInteractiveObject::OnRep_Rescuer() {
}

void AReviveInteractiveObject::MultiCastWantDestruction_Implementation(bool _bToDeath) {
}

bool AReviveInteractiveObject::BPF_IsInSameTeamAsLocalPlayer() const {
    return false;
}

bool AReviveInteractiveObject::BPF_IsInSamCoopGroupAsLocalPlayer() const {
    return false;
}

AActor* AReviveInteractiveObject::BPF_GetReviveActor() const {
    return NULL;
}







void AReviveInteractiveObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AReviveInteractiveObject, m_ReviveActor);
    DOREPLIFETIME(AReviveInteractiveObject, m_RescuerActor);
}


