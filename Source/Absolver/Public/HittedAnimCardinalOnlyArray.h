#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "HittedAnimCardinalOnlyArray.generated.h"

USTRUCT(BlueprintType)
struct FHittedAnimCardinalOnlyArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_Array[4];
    
    ABSOLVER_API FHittedAnimCardinalOnlyArray();
};

