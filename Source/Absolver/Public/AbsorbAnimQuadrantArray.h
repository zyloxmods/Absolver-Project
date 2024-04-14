#pragma once
#include "CoreMinimal.h"
#include "AbsorbAnimQuadrantArray.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAbsorbAnimQuadrantArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_Array[4];
    
    ABSOLVER_API FAbsorbAnimQuadrantArray();
};

