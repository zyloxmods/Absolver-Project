#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "DoorStateInfo.h"
#include "EBlockerSate.h"
#include "ERoomAnchor.h"
#include "InteractiveInterface.h"
#include "ProceduralPathBlockers.generated.h"

class APlayerState;
class UBaseItemData;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ABSOLVER_API AProceduralPathBlockers : public AActor/*, public IInteractiveInterface */ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=On_RepState, meta=(AllowPrivateAccess=true))
    FDoorStateInfo m_DoorStateInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EBlockerSate m_eStateBeforeLockDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iRoomLinked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerState*> m_PlayersWaitingForDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_WaitForAllPlayersTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_InteractionTrigger;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERoomAnchor m_eAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bVisited;
    
public:
    AProceduralPathBlockers(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnWaitForPlayersTriggerEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnWaitForPlayersTriggerBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRoomWaitingToBeClearedUpdated(int32 _iRoom);
    
private:
    UFUNCTION(BlueprintCallable)
    void On_RepState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_WasVisited() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsLockedByTrials() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsLockedByKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetKeysNeeded(TArray<UBaseItemData*>& _OutKeys) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ChangeState(EBlockerSate _eNewState, bool _bWithAllPlayers, bool _bFromInteraction, bool _bPlaySound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CanBeOpened() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_StateChanged(FDoorStateInfo _newState);
    

    // Fix for true pure virtual functions not being implemented
};

