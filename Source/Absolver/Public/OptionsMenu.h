#pragma once
#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "OptionsMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UOptionsMenu : public UMenuWidget {
    GENERATED_BODY()
public:
    UOptionsMenu();

    UFUNCTION(BlueprintCallable)
    void BPF_SetInvertCameraYAxis(bool _bInvert);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInvertCameraXAxis(bool _bInvert);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetInvertCameraYAxis();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetInvertCameraXAxis();
    
};

