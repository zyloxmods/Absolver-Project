#pragma once
#include "CoreMinimal.h"
#include "BaseUseCondition.h"
#include "BasePowerUseCondition.generated.h"

UCLASS(Abstract, Blueprintable)
class ABSOLVER_API UBasePowerUseCondition : public UBaseUseCondition {
    GENERATED_BODY()
public:
    UBasePowerUseCondition();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetTimeSincePowerWasLaunch(float& _fOutTimeSpent, bool& _bIsFirstLaunch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetTimeSinceOtherPowerWasLaunch(float& _fOutTimeSpent, bool& _bIsFirstLaunch) const;
    
};

