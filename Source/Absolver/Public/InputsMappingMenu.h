#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Fonts/SlateFontInfo.h"
#include "EMappableFieldScaleTypes.h"
#include "ERemappingAllowedInputTypes.h"
#include "ERemappingFinishedStates.h"
#include "InputKeyMappingHandler.h"
#include "MenuWidget.h"
#include "Templates/SubclassOf.h"
#include "InputsMappingMenu.generated.h"

class UButtonUserWidget;
class UInputMappingWidget;
class UMappableInputsDB;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UInputsMappingMenu : public UMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMappableInputsDB* m_MappableInputsDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInputMappingWidget> m_InputMappingWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin m_sectionTitleMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo m_sectionTitleFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_sectionTitleColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush m_sectionTitleBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsRemappingOccured;
    
    UInputsMappingMenu();

    UFUNCTION(BlueprintCallable)
    void OnRemappingStarted(FName _ActionName, EMappableFieldScaleTypes _eScaleType);
    
    UFUNCTION(BlueprintCallable)
    void OnRemappingFieldFocusLost(FName _ActionName, EMappableFieldScaleTypes _ScaleType);
    
    UFUNCTION(BlueprintCallable)
    void OnRemappingFieldFocused(FName _ActionName, EMappableFieldScaleTypes _ScaleType);
    
    UFUNCTION(BlueprintCallable)
    void OnGamepadControllerTypeChanged(FName _gamepadControllerType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateRemappingKeyList();
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateMappingListKeyIcons();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RestoreDefaultMapping();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_RemoveMapping(FName _ActionName);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_PerformKeyRemapping(FName _ActionName, FInputKeyMappingHandler _NewKeyMapping);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsWaitingInputForRemapping();
    
    UFUNCTION(BlueprintCallable)
    FText BPF_GetRemappingFailMessage(ERemappingFinishedStates _finishState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_FillRemappingKeyList(UPanelWidget* _KeyContainer, ERemappingAllowedInputTypes _eRemappingAllowedInputTypes, UButtonUserWidget* _LastRemappingFieldNextButton);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Cancel();
    
    UFUNCTION(BlueprintCallable)
    void BPF_BuildRemappingListOuterNavigation(UButtonUserWidget* _LastRemappingFieldNextButton);
    
    UFUNCTION(BlueprintCallable)
    void BPF_BuildRemappingFieldsListExplicitNavigation(UButtonUserWidget* _LastRemappingFieldNextButton);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyMapping(ERemappingAllowedInputTypes _eRemappingInputTypeToApply);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRemappingSucceed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRemappingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRemappingFieldLostFocus(UInputMappingWidget* _focusedRemappingWidget, EMappableFieldScaleTypes _eScaleType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRemappingFieldFocused(UInputMappingWidget* _focusedRemappingWidget, EMappableFieldScaleTypes _eScaleType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRemappingFailed(ERemappingFinishedStates _eRemappingStates, FKey _keyPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnKeyPressedForRemapping(FName _ActionName, FInputKeyMappingHandler _NewKeyMapping, bool _bIsKeyboardRemapping);
    
};

