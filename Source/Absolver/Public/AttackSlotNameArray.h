#pragma once
#include "CoreMinimal.h"
#include "AttackSlotNameArray.generated.h"

USTRUCT(BlueprintType)
struct FAttackSlotNameArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Array[2];
    
    ABSOLVER_API FAttackSlotNameArray();
};

