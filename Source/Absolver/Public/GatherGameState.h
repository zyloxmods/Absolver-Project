#pragma once
#include "CoreMinimal.h"
#include "BonusPointsStep.h"
#include "EGatherEndType.h"
#include "PVEGameState.h"
#include "WaitingEndGamePlayerInfo.h"
#include "WaitingPlayerInfo.h"
#include "GatherGameState.generated.h"

class ABreakable;
class AGatherBank;
class AGatherObjectiveManager;
class AGatherSwitchGate;
class APVEBossSituation;
class APlayerState;
class AProceduralPathBlockers;
class ATeamSequenceActor;
class UCurveFloat;

UCLASS(Blueprintable)
class ABSOLVER_API AGatherGameState : public APVEGameState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWaitingPlayerListChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLivesNumUpdateCallback, int32, _iLives);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGatherChestOpened);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBankResourcesAmountChanged, int32, _iNewAmount);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGatherChestOpened OnGatherChestLooted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitingPlayerListChanged OnWaitingPlayerListChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLivesNumUpdateCallback OnLivesNumUpdateCallback;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AGatherObjectiveManager> m_GatherObjectiveManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float m_fGameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BankedResource, meta=(AllowPrivateAccess=true))
    int32 m_iBankResource;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AGatherBank>> m_Banks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBonusPointsStep> m_BonusPointsSteps;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AGatherSwitchGate>> m_SwitchGates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EGatherEndType m_EndType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWaitingPlayerInfo> m_WaitingPlayerInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRepWaitingEndGameInfo, meta=(AllowPrivateAccess=true))
    FWaitingEndGamePlayerInfo m_WaitingEndGamePlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_DamageMultiplierFromResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_DamageReceivedMultiplierFromResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPreventBackTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxLives;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATeamSequenceActor> m_sequenceToLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APVEBossSituation> m_BossSituation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bTickBossVolumes;
    
public:
    AGatherGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifySwitchGateClosed(AGatherSwitchGate* _switchGate);
    
    UFUNCTION(BlueprintCallable)
    void OnRepWaitingEndGameInfo();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_BankedResource();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingLives() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_StoreResource(int32 _iValue, AGatherBank* _bank);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetStoredResource(int32 _iValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetEndType(EGatherEndType _EndType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RegisterSwitchGate(AGatherSwitchGate* _switchGate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RegisterBank(AGatherBank* _bank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsPlayerWaitingForDoor(APlayerState* _playerState, AProceduralPathBlockers* _door) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetWavesInfos(int32& _iOutCurrWave, int32& _iOutTotalWaves, int32& _iAITotalToSpawn, int32& _iRemainingAIs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FWaitingPlayerInfo> BPF_GetWaitingPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetStoredResource() const;
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_GetResourcesGained();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetNumUnopenedGatherChests() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetEnemiesAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGatherEndType BPF_GetEndType() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_CheckStatues();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_NewStatueActive(ABreakable* _Statue, bool _Active);
    
};

