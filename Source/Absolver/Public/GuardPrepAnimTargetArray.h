#pragma once
#include "CoreMinimal.h"
#include "GuardAnimStyleArray.h"
#include "GuardPrepAnimTargetArray.generated.h"

USTRUCT(BlueprintType)
struct FGuardPrepAnimTargetArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuardAnimStyleArray m_Array[3];
    
    ABSOLVER_API FGuardPrepAnimTargetArray();
};

