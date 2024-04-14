#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "ECoopTransitionState.h"
#include "EDangerStates.h"
#include "EGameModeTypes.h"
#include "SpawnerPerZone.h"
#include "Templates/SubclassOf.h"
#include "ThePlainesGameState.generated.h"

class AAISpawner;
class AActor;
class URewardScreenWidget;

UCLASS(Blueprintable)
class ABSOLVER_API AThePlainesGameState : public AGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iNumPlayersPerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bFriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bOnDedicatedServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<URewardScreenWidget> m_RewardWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_TrainingLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAISpawner> m_TrainingAISpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float m_fStartTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float m_fRematchTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 m_uiLastHostZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeBeforeAFKWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeBeforeAFKLeave;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRepNumTeam, meta=(AllowPrivateAccess=true))
    int32 m_iNumTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepCoopTransitionState, meta=(AllowPrivateAccess=true))
    ECoopTransitionState m_eCoopTransitionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeBeforeVanishActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsSpectatorCameraAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShouldGiveXPOnKill;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bHasRunOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSpawnerPerZone> m_ToSpawnFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDangerStates m_eThresholdDangerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fReviveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDeathRespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fReviveLifePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDeathLifePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRoomClearedLifePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVanishTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanGoDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRespawnTimeNoDown;
    
public:
    AThePlainesGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRepNumTeam();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRepCoopTransitionState();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetTutorialProgress(int32 _iProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsPvPGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool BPF_IsNetReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsMatchmakingAllowed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetTutorialProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetTimeBeforeVanishActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetRespawnTimeNoDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EGameModeTypes BPF_GetGameModeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetDownTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECoopTransitionState BPF_GetCoopTransitionState();
    
};

