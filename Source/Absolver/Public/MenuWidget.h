#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "ECoopGameModeAnswerStatus.h"
#include "ECycleDirection.h"
#include "EGameModeTypes.h"
#include "EMenuEnum.h"
#include "EMenuTransitions.h"
#include "EWidgetLifeCycle.h"
#include "InputAction.h"
#include "SCUserWidget.h"
#include "MenuWidget.generated.h"

class AActor;
class UBaseNotification;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UMenuWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTransitionFinished);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMenuInputPressed, InputAction, _eInput, bool&, _bConsume);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransitionFinished m_OnTransitionFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetLifeCycle m_eLifeCycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPushInputContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHideOnPushedOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHideOnPopOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_CurrentMenuVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iZOrder;
    
public:
    UMenuWidget();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void BPF_PlayTransitionAnimation(UWidgetAnimation* _inAnimation, TEnumAsByte<EUMGSequencePlayMode::Type> _ePlayMode, bool _bDisableInputs);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PlayBackSound();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsCurrentMenu();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetZOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* BPF_GetMenuAnimations();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetIsInTransitionAnimation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void BPF_EnableInputs();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void BPF_DisableInputs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_AreInputsEnabled();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OpenFromNotification(UBaseNotification* _notification);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnTrainingEditPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnToggleStatsButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnStartTrainingPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSortingInventoryButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRenameButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRemoveButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPasteButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPageNavigation(ECycleDirection _eDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnOpenItemOptionMenuButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnMenuTransitionOut(EMenuTransitions _eTransition, EMenuEnum _eNewMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnMenuTransitionIn(EMenuTransitions _eTransition, EMenuEnum _ePrevMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnMenuPreviewPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnMenuButtonPressed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnGroupMemberNewAnswer(const FUniqueNetIdRepl& _groupMemberUniqueId, AActor* _memberActor, ECoopGameModeAnswerStatus _eNewAnswer, EGameModeTypes _eGameModeType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEditButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCopyButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnBackButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnActionButtonPressed();
    
};

