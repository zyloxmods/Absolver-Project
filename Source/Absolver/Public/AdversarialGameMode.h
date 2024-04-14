#pragma once
#include "CoreMinimal.h"
#include "ERematchMethod.h"
#include "GameModeRewardStruct.h"
#include "ThePlainesGameMode.h"
#include "AdversarialGameMode.generated.h"

class AAdversarialGameState;
class AAdversarialPlayerState;
class AController;

UCLASS(Blueprintable, NonTransient)
class ABSOLVER_API AAdversarialGameMode : public AThePlainesGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNumTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNumPlayersPerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNbWinningRounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEveryDeathIsAKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHasIntro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoRematch;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERematchMethod m_RematchMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStartTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRematchTimer;
    
public:
    AAdversarialGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ForceStartMatch();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetWinners(const TArray<AController*>& _controllers);
    
    UFUNCTION(BlueprintCallable)
    TArray<AController*> BPF_GetWinners();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetNumberOfTeams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetNumberOfPlayersPerTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAdversarialGameState* BPF_GetAdversarialGameState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AController* BPF_ComputeDefaultKiller(AController* _killedPlayer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnStartMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEndMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 BPE_GetWinningTeamID();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetRewards(AAdversarialPlayerState* PlayerState, FGameModeRewardStruct& _rewards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 BPE_GetPvPPoints();
    
};

