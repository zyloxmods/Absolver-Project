#pragma once
#include "CoreMinimal.h"
#include "GuardAnimQuadrantArray.h"
#include "GuardAnimWeaponArray.generated.h"

USTRUCT(BlueprintType)
struct FGuardAnimWeaponArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuardAnimQuadrantArray m_Array[3];
    
    ABSOLVER_API FGuardAnimWeaponArray();
};

