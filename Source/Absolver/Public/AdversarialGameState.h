#pragma once
#include "CoreMinimal.h"
#include "EMatchEndReason.h"
#include "GameModeRewardStruct.h"
#include "ThePlainesGameState.h"
#include "AdversarialGameState.generated.h"

class AAdversarialPlayerState;
class AController;
class AFightingCharacter;

UCLASS(Blueprintable)
class ABSOLVER_API AAdversarialGameState : public AThePlainesGameState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMatchValidityChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMatchFullChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchValidityChanged m_OnMatchValidityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchFullChanged m_OnMatchFullChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iNbWinningRounds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SetMatchValidity, meta=(AllowPrivateAccess=true))
    bool m_bMatchValidity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iRematchCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 m_uiMatchID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_WinnerTeamIndex, meta=(AllowPrivateAccess=true))
    int32 m_iWinnerTeamIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bReadyToEndMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EMatchEndReason m_eEndGameReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bCanEndMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<AController*> m_Winners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SetCountDownIsOver, meta=(AllowPrivateAccess=true))
    bool m_bCountDownOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SetCacheMatchState, meta=(AllowPrivateAccess=true))
    FName m_CacheMatchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 m_uiNbExpectedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SetNbConnectedPlayerCount, meta=(AllowPrivateAccess=true))
    uint8 m_uiNbConnectedPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bWinnerComputed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRewardScreenDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEndMatchDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDelayBeforeHidingCharactersAtEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanSkipIntro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SetMatchInProgress, meta=(AllowPrivateAccess=true))
    bool m_bMatchInProgressOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SetMatchFull, meta=(AllowPrivateAccess=true))
    bool m_bMatchFull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SetAskForRematchMaking, meta=(AllowPrivateAccess=true))
    bool m_bAskForRematchMaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bPvPReadyAtEnd;
    
public:
    AAdversarialGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WinnerTeamIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetNbConnectedPlayerCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetMatchValidity();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetMatchInProgress();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetMatchFull();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetCountDownIsOver();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetCacheMatchState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetAskForRematchMaking();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetMatchInProgress(bool _bInProgress);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetReadyToEndMatch(bool _bReadyToEndMatch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsMatchFull();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAFriendlyMatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetWinnerTeamIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetTeamScore(uint8 _uiTeamIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetPlayerIndexInTeam(AAdversarialPlayerState* _player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAdversarialPlayerState* BPF_GetPlayer(int32 _iTeam, int32 _iPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 BPF_GetConnectedPlayerCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BPF_GetCachedMatchState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnHotJoinComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_HackReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetRewards(AAdversarialPlayerState* PlayerState, AFightingCharacter* _actor, FGameModeRewardStruct& _rewards);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BFP_GetMatchValidity();
    
};

