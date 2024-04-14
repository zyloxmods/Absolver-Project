#pragma once
#include "CoreMinimal.h"
#include "HittedAnimCardinalArray.h"
#include "HittedAnimQuadrantArray.generated.h"

USTRUCT(BlueprintType)
struct FHittedAnimQuadrantArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FHittedAnimCardinalArray m_Array[4];
    
    ABSOLVER_API FHittedAnimQuadrantArray();
};

