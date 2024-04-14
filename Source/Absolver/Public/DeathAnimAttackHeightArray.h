#pragma once
#include "CoreMinimal.h"
#include "DeathAnimAttackCardinalArray.h"
#include "DeathAnimAttackHeightArray.generated.h"

USTRUCT(BlueprintType)
struct FDeathAnimAttackHeightArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathAnimAttackCardinalArray m_Array[3];
    
    ABSOLVER_API FDeathAnimAttackHeightArray();
};

