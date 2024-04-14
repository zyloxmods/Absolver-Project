#pragma once
#include "CoreMinimal.h"
#include "DeathAnimAttackCardinalArray.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FDeathAnimAttackCardinalArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_Array[4];
    
    ABSOLVER_API FDeathAnimAttackCardinalArray();
};

