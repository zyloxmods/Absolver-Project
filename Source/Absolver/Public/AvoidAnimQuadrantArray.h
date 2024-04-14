#pragma once
#include "CoreMinimal.h"
#include "AvoidAnimAvoidTypeArray.h"
#include "AvoidAnimQuadrantArray.generated.h"

USTRUCT(BlueprintType)
struct FAvoidAnimQuadrantArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvoidAnimAvoidTypeArray m_Array[4];
    
    ABSOLVER_API FAvoidAnimQuadrantArray();
};

