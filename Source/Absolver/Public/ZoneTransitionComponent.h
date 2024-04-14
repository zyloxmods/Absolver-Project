#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EDangerStates.h"
#include "ERelationshipTypes.h"
#include "ZoneTransitionComponent.generated.h"

class AActor;
class AFightingCharacter;
class AFightingPlayerController;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABSOLVER_API UZoneTransitionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnShowGhostGate, bool, _bShow, AFightingPlayerController*, _controller);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEnableInteraction, bool, _bEnable, AFightingPlayerController*, _controller);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCross);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowGhostGate m_OnShowGhostGate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnableInteraction m_OnEnableInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCross m_OnCross;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiFromZoneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiToZoneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiFromSubZoneID;
    
public:
    UZoneTransitionComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnZoneEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnTransitionZoneIdChanged(AFightingCharacter* _character, uint8 _ZoneID);
    
    UFUNCTION(BlueprintCallable)
    void OnRelationshipChanged(AActor* _shifter, AActor* _shiftTarget, ERelationshipTypes _ePreviousRelation, ERelationshipTypes _enewRelation);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnEndPlay(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalRelationshipChanged(AActor* _shifter, AActor* _shiftTarget, ERelationshipTypes previousRelation, ERelationshipTypes _enewRelation);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalInGroupCoopTransitionChanged(bool _bInGroupTransition);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalDangerStateChanged(EDangerStates _eDangerState);
    
    UFUNCTION(BlueprintCallable)
    void OnGateLockExit(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnGateLockEnter(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnEntranceEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDangerStateChanged(EDangerStates _ePrevDangerState, EDangerStates _eNewDangerState);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentZoneChanged(int32 _iNewZone);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_RegisterCollisionComponent(UPrimitiveComponent* _innerEntranceTrigger, UPrimitiveComponent* _entranceTrigger, UPrimitiveComponent* _noCoopComponent, UPrimitiveComponent* _zoneEndComponent, UPrimitiveComponent* _gateComponent);
    
};

