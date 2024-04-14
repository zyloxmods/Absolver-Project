#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SCPlayerController.generated.h"

class UInputContextData;
class UPopupWidget;
class UUserWidget;

UCLASS(Blueprintable)
class ABSOLVER_API ASCPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUserWidget> m_HUD;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSaveProfileOnly;
    
public:
    ASCPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAchievement(const FString& achievementId);
    
    UFUNCTION(BlueprintCallable)
    void PushInputContext(UInputContextData* _inputContextData);
    
    UFUNCTION(BlueprintCallable)
    void PopInputContext(UInputContextData* _inputContextData);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateAchievementCompletion(const FString& _achievementId, float _fCompletionPercent);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetNeedSave();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ScheduleSave();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SaveIfScheduled();
    
    UFUNCTION(BlueprintCallable)
    void BPF_QueryAchievements();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ShowSkipCutsceneWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SaveStatusChanged(bool _bSaving);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_MatchMakingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_LeaveGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_HideSkipCutsceneWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPopupWidget* BPE_GetPopupWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPopupWidget* BPE_CreatePopupWidget();
    
};

