#pragma once
#include "CoreMinimal.h"
#include "EIntergerGameplayOptionTypes.h"
#include "MenuWidget.h"
#include "GameplayOptionsMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UGameplayOptionsMenu : public UMenuWidget {
    GENERATED_BODY()
public:
    UGameplayOptionsMenu();

    UFUNCTION(BlueprintCallable)
    void BPF_SetSwitchTargetOnAttack(bool _bSwitchTargetOnAttack);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInvertCameraYAxis(bool _bInvert);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInvertCameraXAxis(bool _bInvert);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGameplayOptionValue(EIntergerGameplayOptionTypes _eOptionType, int32 _iOptionValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RestoreOptionDefaultValue(EIntergerGameplayOptionTypes _eOptionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetSwitchTargetOnAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetInvertCameraYAxis();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetInvertCameraXAxis();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetGameplayOptionValue(EIntergerGameplayOptionTypes _eOptionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetGameplayOptionNormalizedValueStep(EIntergerGameplayOptionTypes _eOptionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetGameplayOptionNormalizedValue(EIntergerGameplayOptionTypes _eOptionType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Default();
    
};

