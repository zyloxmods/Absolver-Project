#include "PickableWeapon.h"
#include "Net/UnrealNetwork.h"

APickableWeapon::APickableWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = true;
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
//    this->RemoteRole = ROLE_SimulatedProxy;
}

void APickableWeapon::ServerRequestPickWeaponPermission_Implementation(AActor* _requester) {
}
bool APickableWeapon::ServerRequestPickWeaponPermission_Validate(AActor* _requester) {
    return true;
}

void APickableWeapon::OnWeaponActorEndPlayCallback(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason) {
}

void APickableWeapon::OnRep_PickableWeaponSource() {
}

void APickableWeapon::MulticastAnswerPickWeaponRequest_Implementation(AActor* _grantedActor) {
}

void APickableWeapon::MulticastActivateTriggerBox_Implementation() {
}


void APickableWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APickableWeapon, m_Source);
}


