#include "GhostGate.h"
#include "InteractionObjectComponent.h"

AGhostGate::AGhostGate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_InteractionObjectComponent = CreateDefaultSubobject<UInteractionObjectComponent>(TEXT("InteractionObjectComponent"));
    this->m_eGhostGateStage = EGhostGateStage::Invalid;
}

void AGhostGate::UseInteractiveObject(APlayerController* _controller) {
}

void AGhostGate::OnPawnEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason) {
}

void AGhostGate::OnMatmakingZoneStatusChanged(UPlayerFightingComponent* _playerComponent, FMatchmakingZoneStatus& _matchmakingZoneStatus) {
}

void AGhostGate::OnLocalRelationshipChanged(AActor* _shifter, AActor* _shiftTarget, ERelationshipTypes _ePreviousRelation, ERelationshipTypes _enewRelation) {
}

void AGhostGate::OnLocalDangerStateChanged(EDangerStates _eDangerState) {
}

void AGhostGate::OnGateProximityReceivedOnJoin(UPlayerFightingComponent* _playerComponent, uint8 _uiGhostID) {
}

void AGhostGate::OnGateProximityExit(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex) {
}

void AGhostGate::OnGateProximityEnter(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

void AGhostGate::OnCoopSessionStartStop(bool _bStart) {
}

void AGhostGate::BPF_SetCollisionShapes(UShapeComponent* _proximityTriggerIn, UShapeComponent* _proximityTriggerOut, UShapeComponent* _RegularDoorCollider, UStaticMeshComponent* _regularDoorStaticMesh, UShapeComponent* _ghostGateCollider) {
}



