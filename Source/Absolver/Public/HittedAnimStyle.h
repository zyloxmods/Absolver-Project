#pragma once
#include "CoreMinimal.h"
#include "HittedAnimQuadrantArray.h"
#include "HittedAnimStyle.generated.h"

USTRUCT(BlueprintType)
struct FHittedAnimStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHittedAnimQuadrantArray> m_Array;
    
    ABSOLVER_API FHittedAnimStyle();
};

