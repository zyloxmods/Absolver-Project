#pragma once
#include "CoreMinimal.h"
#include "DodgeAnimQuadrantArray.h"
#include "DodgeAnimStyle.generated.h"

USTRUCT(BlueprintType)
struct FDodgeAnimStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDodgeAnimQuadrantArray> m_Array;
    
    ABSOLVER_API FDodgeAnimStyle();
};

