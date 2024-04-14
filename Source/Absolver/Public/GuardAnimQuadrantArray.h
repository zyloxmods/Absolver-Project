#pragma once
#include "CoreMinimal.h"
#include "GuardAnimStyleArray.h"
#include "GuardAnimQuadrantArray.generated.h"

USTRUCT(BlueprintType)
struct FGuardAnimQuadrantArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuardAnimStyleArray m_Array[4];
    
    ABSOLVER_API FGuardAnimQuadrantArray();
};

