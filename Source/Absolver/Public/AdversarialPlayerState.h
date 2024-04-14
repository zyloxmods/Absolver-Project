#pragma once
#include "CoreMinimal.h"
#include "EEndGameResult.h"
#include "EGameModePlayerAnswers.h"
#include "FightingPlayerState.h"
#include "PlayerKill.h"
#include "AdversarialPlayerState.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API AAdversarialPlayerState : public AFightingPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EGameModePlayerAnswers m_eLastAnswer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bReadyToSkipCutscene;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPlayerKill> m_Scores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iNbMatchWon;
    
public:
    AAdversarialPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetReadyToLeaveCutscene(bool _bReady);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void Multicast_UpdateReadyToLeaveCutScene(bool _bReady);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetTotalKillCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetMatchWon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEndGameResult BPF_GetMatchResult();
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_GetKillsOnPlayer(AFightingPlayerState* _playerKilled);
    
};

