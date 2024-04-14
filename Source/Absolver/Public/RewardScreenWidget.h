#pragma once
#include "CoreMinimal.h"
#include "ECharacterProgressionRewardTypes.h"
#include "EEndGameResult.h"
#include "EMatchEndReason.h"
#include "GameModeLootStruct.h"
#include "GameModeRewardStruct.h"
#include "LootBoxRewardStruct.h"
#include "MenuWidget.h"
#include "RewardScreenWidget.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API URewardScreenWidget : public UMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCurrentCharacterLevelProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameModeRewardStruct m_Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameModeLootStruct> m_Loot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootBoxRewardStruct> m_LootBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShowRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndGameResult m_GameResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchEndReason m_eEndGameReason;
    
public:
    URewardScreenWidget();

    UFUNCTION(BlueprintCallable)
    void BPF_StopCharacterLevelBarProgress();
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartMatchMaking();
    
    UFUNCTION(BlueprintCallable)
    void BPF_StartCharacterLevelBarProgress(float _fDuration, UCurveFloat* _progressCurve, float _fDelay);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PauseCharacterLevelBar(float _fDuration);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LaunchPostMatchScene();
    
    UFUNCTION(BlueprintCallable)
    void BPF_InitRewardScreen(EEndGameResult _eGameResult, EMatchEndReason _eEndGameReason, FGameModeRewardStruct _reward, const TArray<FGameModeLootStruct>& _loot, const TArray<FLootBoxRewardStruct>& _LootBoxes, bool _bShowRewards);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddRemainingGameModePoints();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddOneGameModePoint(bool& _bLevelUp, FGameModeLootStruct& _loot, FLootBoxRewardStruct& _LootBoxes);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnGameModeLevelUp(int32 iNewLevel, const FGameModeLootStruct& _loot, const FLootBoxRewardStruct& _LootBoxes);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCharacterLevelUp(int32 _iNewLevel, const TArray<ECharacterProgressionRewardTypes>& _rewards);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCharacterLevelBarProgressStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCharacterLevelBarProgressEnded();
    
};

