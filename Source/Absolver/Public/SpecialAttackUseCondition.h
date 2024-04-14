#pragma once
#include "CoreMinimal.h"
#include "BaseUseCondition.h"
#include "SpecialAttackUseCondition.generated.h"

UCLASS(Abstract, Blueprintable)
class ABSOLVER_API USpecialAttackUseCondition : public UBaseUseCondition {
    GENERATED_BODY()
public:
    USpecialAttackUseCondition();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetTimeSinceSpeAttackWasLaunch(float& _fOutTimeSpent, bool& _bIsFirstLaunch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetTimeSinceAnotherSpeAttackWasLaunch(FName otherSpeAttackName, float& _fOutTimeSpent, bool& _bIsFirstLaunch) const;
    
};

