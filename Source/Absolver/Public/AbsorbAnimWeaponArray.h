#pragma once
#include "CoreMinimal.h"
#include "AbsorbAnimQuadrantArray.h"
#include "AbsorbAnimWeaponArray.generated.h"

USTRUCT(BlueprintType)
struct FAbsorbAnimWeaponArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbsorbAnimQuadrantArray m_Array[3];
    
    ABSOLVER_API FAbsorbAnimWeaponArray();
};

