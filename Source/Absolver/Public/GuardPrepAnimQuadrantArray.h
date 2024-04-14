#pragma once
#include "CoreMinimal.h"
#include "GuardPrepAnimTargetArray.h"
#include "GuardPrepAnimQuadrantArray.generated.h"

USTRUCT(BlueprintType)
struct FGuardPrepAnimQuadrantArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuardPrepAnimTargetArray m_Array[4];
    
    ABSOLVER_API FGuardPrepAnimQuadrantArray();
};

