#pragma once
#include "CoreMinimal.h"
#include "HittedAnimTargetArray.h"
#include "HittedAnimCardinalArray.generated.h"

USTRUCT(BlueprintType)
struct FHittedAnimCardinalArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FHittedAnimTargetArray m_Array[4];
    
    ABSOLVER_API FHittedAnimCardinalArray();
};

