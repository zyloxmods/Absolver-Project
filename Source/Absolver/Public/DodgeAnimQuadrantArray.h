#pragma once
#include "CoreMinimal.h"
#include "DodgeAnimCardinalArray.h"
#include "DodgeAnimQuadrantArray.generated.h"

USTRUCT(BlueprintType)
struct FDodgeAnimQuadrantArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDodgeAnimCardinalArray m_Array[4];
    
    ABSOLVER_API FDodgeAnimQuadrantArray();
};

