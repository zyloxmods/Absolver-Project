#pragma once
#include "CoreMinimal.h"
#include "FidgetAnimArray.h"
#include "FidgetAnimQuadrantArray.generated.h"

USTRUCT(BlueprintType)
struct FFidgetAnimQuadrantArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFidgetAnimArray m_Array[4];
    
    ABSOLVER_API FFidgetAnimQuadrantArray();
};

