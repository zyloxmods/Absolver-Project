#pragma once
#include "CoreMinimal.h"
#include "SCFloatRange.h"
#include "DistributionPointBonuses.generated.h"

USTRUCT(BlueprintType)
struct FDistributionPointBonuses {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCFloatRange m_Bonuses[5];
    
    ABSOLVER_API FDistributionPointBonuses();
};

