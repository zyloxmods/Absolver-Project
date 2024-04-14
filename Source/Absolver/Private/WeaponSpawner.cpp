#include "WeaponSpawner.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickableWeapon.h"

AWeaponSpawner::AWeaponSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
//    this->RemoteRole = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->m_WeaponPickableClass = APickableWeapon::StaticClass();
}

void AWeaponSpawner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWeaponSpawner, m_WeaponSpawned);
}


