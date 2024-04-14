#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EMusicToPlay.h"
#include "EObjectiveType.h"
#include "GatherObjectiveManager.generated.h"

class UGatherArchetypeDB;

UCLASS(Blueprintable)
class ABSOLVER_API AGatherObjectiveManager : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FObjectiveCompleted);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveCompleted OnObjectiveCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWellPerformedThreshold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iNumStatuesAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iTotGleamsForStatues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iEnemiesAlive;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMarkedNum[3];
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGatherArchetypeDB* m_MarkedArchetypes;
    
public:
    AGatherObjectiveManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void NetMulticastSetGatherObj();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void NetMulticastOnStartMusic(EMusicToPlay _eMusicToPlay);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void NetMulticastOnRoomOpened(EObjectiveType _eObjectiveType, float _fWaveDelay);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void NetMulticastCompleteObjective();
    
public:
    UFUNCTION(BlueprintCallable)
    void CheckObjectiveCompletion();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetObjectiveType(EObjectiveType _eType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_InitObjective();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EObjectiveType BPF_GetObjectiveType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_StartMusic(EMusicToPlay _eMusicToPlay);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_InitObjective();
    
};

