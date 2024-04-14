#pragma once
#include "CoreMinimal.h"
#include "ParryAnimationParryQuadrantArray.h"
#include "ParryAnimationCharacterQuadrantArray.generated.h"

USTRUCT(BlueprintType)
struct FParryAnimationCharacterQuadrantArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FParryAnimationParryQuadrantArray m_Array[4];
    
    ABSOLVER_API FParryAnimationCharacterQuadrantArray();
};

