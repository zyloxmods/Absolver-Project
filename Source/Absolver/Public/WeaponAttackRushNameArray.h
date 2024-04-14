#pragma once
#include "CoreMinimal.h"
#include "AttackSlotNameArray.h"
#include "WeaponAttackRushNameArray.generated.h"

USTRUCT(BlueprintType)
struct FWeaponAttackRushNameArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackSlotNameArray m_Array[3];
    
    ABSOLVER_API FWeaponAttackRushNameArray();
};

