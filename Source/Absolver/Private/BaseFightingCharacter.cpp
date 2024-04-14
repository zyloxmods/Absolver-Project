#include "BaseFightingCharacter.h"
#include "FightingMovementComponent.h"
#include "Net/UnrealNetwork.h"

ABaseFightingCharacter::ABaseFightingCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UFightingMovementComponent>(TEXT("CharMoveComp"))) {
    this->m_AttackComponent = NULL;
    this->m_Weapons[0] = NULL;
    this->m_Weapons[1] = NULL;
    this->m_Weapons[2] = NULL;
    this->m_Weapons[3] = NULL;
    this->m_Weapons[4] = NULL;
    this->m_Weapons[5] = NULL;
    this->m_bIsInLockedGhostGatesZone = false;
    this->m_eFaction = EFactionsEnums::Faction1;
}

void ABaseFightingCharacter::SetTarget(AActor* _target) {
}

void ABaseFightingCharacter::OnRep_IsInLockedGhostGatesZone() {
}

void ABaseFightingCharacter::OnDangerStateChanged(EDangerStates _ePrevDangerState, EDangerStates _eNewDangerState) {
}

AActor* ABaseFightingCharacter::GetTarget() const {
    return NULL;
}

UAttackComponent* ABaseFightingCharacter::GetAttackComponent() const {
    return NULL;
}

EDangerStates ABaseFightingCharacter::BPF_GetDangerState() const {
    return EDangerStates::Safe;
}




void ABaseFightingCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABaseFightingCharacter, m_bIsInLockedGhostGatesZone);
}


