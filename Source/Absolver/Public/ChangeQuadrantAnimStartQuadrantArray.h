#pragma once
#include "CoreMinimal.h"
#include "ChangeQuadrantAnimEndQuadrantArray.h"
#include "ChangeQuadrantAnimStartQuadrantArray.generated.h"

USTRUCT(BlueprintType)
struct FChangeQuadrantAnimStartQuadrantArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeQuadrantAnimEndQuadrantArray m_Array[4];
    
    ABSOLVER_API FChangeQuadrantAnimStartQuadrantArray();
};

