#pragma once
#include "CoreMinimal.h"
#include "GuardPrepAnimQuadrantArray.h"
#include "GuardPrepAnimWeaponArray.generated.h"

USTRUCT(BlueprintType)
struct FGuardPrepAnimWeaponArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuardPrepAnimQuadrantArray m_Array[3];
    
    ABSOLVER_API FGuardPrepAnimWeaponArray();
};

