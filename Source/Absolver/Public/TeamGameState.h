#pragma once
#include "CoreMinimal.h"
#include "AdversarialGameState.h"
#include "TeamGameState.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API ATeamGameState : public AAdversarialGameState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnResetForNewMatch);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNewTeamScore);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewScoreLimit, int32, newScoreLimit);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExtraTimeChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndMatch);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewScoreLimit OnNewScoreLimitChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewTeamScore OnNewTeamScore;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExtraTimeChanged OnExtraTimeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResetForNewMatch OnResetForNewMatch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndMatch OnEndMatch;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCurrentMatchTimeLeft;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepTeamScore, meta=(AllowPrivateAccess=true))
    TArray<int32> m_TeamScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepScoreLimit, meta=(AllowPrivateAccess=true))
    int32 m_iScoreLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iAlmostWinScore;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int64 m_iTimeOfEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_fTotalMatchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepExtraTime, meta=(AllowPrivateAccess=true))
    bool m_bExtraTime;
    
public:
    ATeamGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetForMatch();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRepTeamScore();
    
    UFUNCTION(BlueprintCallable)
    void OnRepScoreLimit();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRepNumTeam();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRepExtraTime();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastResetForNewMatch();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastEndMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsInExtraTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetScoreLimit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetMatchTimeLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetAlmostWinScore();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddScoreToTeam(uint8 _uiTeamID, float _fScore);
    
};

