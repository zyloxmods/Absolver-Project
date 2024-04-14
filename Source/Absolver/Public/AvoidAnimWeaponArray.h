#pragma once
#include "CoreMinimal.h"
#include "AvoidAnimQuadrantArray.h"
#include "AvoidAnimWeaponArray.generated.h"

USTRUCT(BlueprintType)
struct FAvoidAnimWeaponArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvoidAnimQuadrantArray m_Array[3];
    
    ABSOLVER_API FAvoidAnimWeaponArray();
};

