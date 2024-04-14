#pragma once
#include "CoreMinimal.h"
#include "DodgeAnimWeaponArray.h"
#include "DodgeAnimCardinalArray.generated.h"

USTRUCT(BlueprintType)
struct FDodgeAnimCardinalArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDodgeAnimWeaponArray m_Array[4];
    
    ABSOLVER_API FDodgeAnimCardinalArray();
};

