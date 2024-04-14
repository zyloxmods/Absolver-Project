#pragma once
#include "CoreMinimal.h"
#include "DodgeAnimStyle.h"
#include "DodgeAnimWeightCategory.generated.h"

USTRUCT(BlueprintType)
struct FDodgeAnimWeightCategory {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDodgeAnimStyle m_Array[4];
    
    ABSOLVER_API FDodgeAnimWeightCategory();
};

