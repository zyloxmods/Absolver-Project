#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "ChangeQuadrantAnimEndQuadrantArray.generated.h"

USTRUCT(BlueprintType)
struct FChangeQuadrantAnimEndQuadrantArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_Array[4];
    
    ABSOLVER_API FChangeQuadrantAnimEndQuadrantArray();
};

