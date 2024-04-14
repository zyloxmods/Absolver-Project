#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "ParryAnimationParryQuadrantArray.generated.h"

USTRUCT(BlueprintType)
struct FParryAnimationParryQuadrantArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_Array[4];
    
    ABSOLVER_API FParryAnimationParryQuadrantArray();
};

