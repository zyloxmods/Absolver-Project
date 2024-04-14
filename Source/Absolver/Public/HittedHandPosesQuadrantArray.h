#pragma once
#include "CoreMinimal.h"
#include "HittedHandPosesCardinalArray.h"
#include "HittedHandPosesQuadrantArray.generated.h"

USTRUCT(BlueprintType)
struct FHittedHandPosesQuadrantArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FHittedHandPosesCardinalArray m_Array[4];
    
    ABSOLVER_API FHittedHandPosesQuadrantArray();
};

