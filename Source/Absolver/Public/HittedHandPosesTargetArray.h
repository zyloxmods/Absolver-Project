#pragma once
#include "CoreMinimal.h"
#include "EHandPoses.h"
#include "HittedHandPosesTargetArray.generated.h"

USTRUCT(BlueprintType)
struct FHittedHandPosesTargetArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHandPoses m_Array[3];
    
    ABSOLVER_API FHittedHandPosesTargetArray();
};

