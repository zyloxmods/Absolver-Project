#pragma once
#include "CoreMinimal.h"
#include "ButtonUserWidget.h"
#include "EStatsAppliedMode.h"
#include "EquippedFightingStyleButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UEquippedFightingStyleButton : public UButtonUserWidget {
    GENERATED_BODY()
public:
    UEquippedFightingStyleButton();

protected:
    UFUNCTION(BlueprintCallable)
    void OnStatsUpdated(EStatsAppliedMode _eMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetFightingStyleID();
    
};

