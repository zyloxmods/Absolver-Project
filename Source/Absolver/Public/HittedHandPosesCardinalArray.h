#pragma once
#include "CoreMinimal.h"
#include "HittedHandPosesTargetArray.h"
#include "HittedHandPosesCardinalArray.generated.h"

USTRUCT(BlueprintType)
struct FHittedHandPosesCardinalArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FHittedHandPosesTargetArray m_Array[4];
    
    ABSOLVER_API FHittedHandPosesCardinalArray();
};

