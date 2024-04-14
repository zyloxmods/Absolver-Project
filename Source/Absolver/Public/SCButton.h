#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Button.h"
#include "ButtonFocusedDelegate.h"
#include "ButtonUnFocusedDelegate.h"
#include "SCButton.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API USCButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonFocused OnFocusReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonUnFocused OnFocusLost;
    
    USCButton();

    UFUNCTION(BlueprintCallable)
    void BPF_SetOverrideFocusTints(FLinearColor _focusedColor, FLinearColor _noFocusColor);
    
};

