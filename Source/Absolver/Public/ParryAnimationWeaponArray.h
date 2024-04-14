#pragma once
#include "CoreMinimal.h"
#include "ParryAnimationCharacterQuadrantArray.h"
#include "ParryAnimationWeaponArray.generated.h"

USTRUCT(BlueprintType)
struct FParryAnimationWeaponArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FParryAnimationCharacterQuadrantArray m_Array[3];
    
    ABSOLVER_API FParryAnimationWeaponArray();
};

