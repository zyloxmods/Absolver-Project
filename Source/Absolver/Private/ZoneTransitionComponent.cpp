#include "ZoneTransitionComponent.h"

UZoneTransitionComponent::UZoneTransitionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_uiFromZoneID = 255;
    this->m_uiToZoneID = 255;
    this->m_uiFromSubZoneID = 0;
}

void UZoneTransitionComponent::OnZoneEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

void UZoneTransitionComponent::OnTransitionZoneIdChanged(AFightingCharacter* _character, uint8 _ZoneID) {
}

void UZoneTransitionComponent::OnRelationshipChanged(AActor* _shifter, AActor* _shiftTarget, ERelationshipTypes _ePreviousRelation, ERelationshipTypes _enewRelation) {
}

void UZoneTransitionComponent::OnPawnEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason) {
}

void UZoneTransitionComponent::OnLocalRelationshipChanged(AActor* _shifter, AActor* _shiftTarget, ERelationshipTypes previousRelation, ERelationshipTypes _enewRelation) {
}

void UZoneTransitionComponent::OnLocalInGroupCoopTransitionChanged(bool _bInGroupTransition) {
}

void UZoneTransitionComponent::OnLocalDangerStateChanged(EDangerStates _eDangerState) {
}

void UZoneTransitionComponent::OnGateLockExit(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex) {
}

void UZoneTransitionComponent::OnGateLockEnter(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

void UZoneTransitionComponent::OnEntranceEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex) {
}

void UZoneTransitionComponent::OnDangerStateChanged(EDangerStates _ePrevDangerState, EDangerStates _eNewDangerState) {
}

void UZoneTransitionComponent::OnCurrentZoneChanged(int32 _iNewZone) {
}

void UZoneTransitionComponent::BPF_RegisterCollisionComponent(UPrimitiveComponent* _innerEntranceTrigger, UPrimitiveComponent* _entranceTrigger, UPrimitiveComponent* _noCoopComponent, UPrimitiveComponent* _zoneEndComponent, UPrimitiveComponent* _gateComponent) {
}


