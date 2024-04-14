#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ButtonUserWidget.h"
#include "EControllerIconAxisTypes.h"
#include "EControllerIconStyles.h"
#include "InputAction.h"
#include "ControllerButtonWidget.generated.h"

class UGenericInputData;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UControllerButtonWidget : public UButtonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerIconAxisTypes m_eAxisType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGenericInputData*> m_InputDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerIconStyles m_IconStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eAction;
    
public:
    UControllerButtonWidget();

    UFUNCTION(BlueprintCallable)
    void BPF_SetInputDatas(TArray<UGenericInputData*> _InputDatas);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInputData(UGenericInputData* _InputData);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetAxisType(EControllerIconAxisTypes _eAxisType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetAction(InputAction _eAction);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsKeyboardInput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText BPF_GetKeyDisplayName(const FKey& _key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey BPF_GetKeyboardKey(bool& _bOutIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> BPF_GetIcon(bool& _bFound, FText& _replacementText, bool& _bShowText);
    
};

