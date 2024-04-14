#pragma once
#include "CoreMinimal.h"
#include "CardinalAttackNameArray.h"
#include "WeaponAttackNameArray.generated.h"

USTRUCT(BlueprintType)
struct FWeaponAttackNameArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCardinalAttackNameArray m_Array[3];
    
    ABSOLVER_API FWeaponAttackNameArray();
};

