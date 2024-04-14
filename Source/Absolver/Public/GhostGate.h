#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EDangerStates.h"
#include "EGhostGateStage.h"
#include "ERelationshipTypes.h"
#include "InteractionTextStruct.h"
#include "InteractiveInterface.h"
#include "MatchmakingZoneStatus.h"
#include "SubZoneShortcutStruct.h"
#include "GhostGate.generated.h"

class APlayerController;
class UInteractionObjectComponent;
class UPlayerFightingComponent;
class UPrimitiveComponent;
class UShapeComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ABSOLVER_API AGhostGate : public AActor/*, public IInteractiveInterface */ {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionObjectComponent* m_InteractionObjectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGhostGateStage m_eGhostGateStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubZoneShortcutStruct m_subZoneShortcut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionTextStruct m_OnCoopSplitDangerInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionTextStruct m_CoopSplitInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionTextStruct m_DissipateInteraction;
    
public:
    AGhostGate(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UseInteractiveObject(APlayerController* _controller);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnMatmakingZoneStatusChanged(UPlayerFightingComponent* _playerComponent, FMatchmakingZoneStatus& _matchmakingZoneStatus);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalRelationshipChanged(AActor* _shifter, AActor* _shiftTarget, ERelationshipTypes _ePreviousRelation, ERelationshipTypes _enewRelation);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalDangerStateChanged(EDangerStates _eDangerState);
    
    UFUNCTION(BlueprintCallable)
    void OnGateProximityReceivedOnJoin(UPlayerFightingComponent* _playerComponent, uint8 _uiGhostID);
    
    UFUNCTION(BlueprintCallable)
    void OnGateProximityExit(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnGateProximityEnter(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCoopSessionStartStop(bool _bStart);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetCollisionShapes(UShapeComponent* _proximityTriggerIn, UShapeComponent* _proximityTriggerOut, UShapeComponent* _RegularDoorCollider, UStaticMeshComponent* _regularDoorStaticMesh, UShapeComponent* _ghostGateCollider);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GhostGateStageChanged(EGhostGateStage _eNewGhostGateStage);
    

    // Fix for true pure virtual functions not being implemented
};

