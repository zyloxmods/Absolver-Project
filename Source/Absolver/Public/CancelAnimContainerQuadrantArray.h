#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "CancelAnimContainerQuadrantArray.generated.h"

USTRUCT(BlueprintType)
struct FCancelAnimContainerQuadrantArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_Array[4];
    
    ABSOLVER_API FCancelAnimContainerQuadrantArray();
};

