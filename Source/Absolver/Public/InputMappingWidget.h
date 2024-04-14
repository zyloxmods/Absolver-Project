#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "AsyncTextureStruct.h"
#include "EMappableFieldScaleTypes.h"
#include "ERemappingAllowedInputTypes.h"
#include "SCUserWidget.h"
#include "InputMappingWidget.generated.h"

class UButtonUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UInputMappingWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionWithRemappingFieldDelegate, FName, _ActionName, EMappableFieldScaleTypes, _ScaleType);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionWithRemappingFieldDelegate m_OnWaitingForRemappingInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionWithRemappingFieldDelegate m_OnFocusReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionWithRemappingFieldDelegate m_OnFocusLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_MappingStringName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_MappingNameStringNegativeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_MappedKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_MappedKeyNameNegativeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTextureStruct m_KeyInputTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncTextureStruct m_KeyInputTextureNegativeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsMappingFieldForAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceDisplayAsSingleField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCheckDuplicateKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappableFieldScaleTypes m_eSelectedFieldScaleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappableFieldScaleTypes m_eFocusedFieldScaleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERemappingAllowedInputTypes m_eRemappingAllowedType;
    
    UInputMappingWidget();

    UFUNCTION(BlueprintCallable)
    void BPF_WaitingKeyInput(EMappableFieldScaleTypes _eScaleType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetRemappingButton(UButtonUserWidget* _remappingButton, EMappableFieldScaleTypes _eScaleType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnRemappingFieldGettingFocusLost(EMappableFieldScaleTypes _eScaleType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnRemappingFieldGettingFocused(EMappableFieldScaleTypes _eScaleType);
    
    UFUNCTION(BlueprintCallable)
    FName BPF_GetActionName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ShouldDisplayTextureKeyRatherThanTextKeyForKeyboard(bool _bUseTexture, EMappableFieldScaleTypes _eScaleType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRemappingStarted(bool _bIsKeyboardRemapping);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRemappingFinished(bool _bIsKeyboardRemapping, FKey _newMappingKey);
    
};

