#pragma once
#include "CoreMinimal.h"
#include "AttackNameContainer.h"
#include "CardinalAttackNameArray.generated.h"

USTRUCT(BlueprintType)
struct FCardinalAttackNameArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNameContainer m_Array[4];
    
    ABSOLVER_API FCardinalAttackNameArray();
};

