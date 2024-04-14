#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UsePowerBehavior.generated.h"

class UBasePowerUseCondition;
class UUsableItemData;

USTRUCT(BlueprintType)
struct FUsePowerBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUsableItemData* m_PowerToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UBasePowerUseCondition>> m_TriggerPowerConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiPowerPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPerformCounterAttackAfterUse;
    
    ABSOLVER_API FUsePowerBehavior();
};

