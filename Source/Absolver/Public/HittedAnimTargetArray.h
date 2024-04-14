#pragma once
#include "CoreMinimal.h"
#include "HittedAnimWeaponArray.h"
#include "HittedAnimTargetArray.generated.h"

USTRUCT(BlueprintType)
struct FHittedAnimTargetArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FHittedAnimWeaponArray m_Array[3];
    
    ABSOLVER_API FHittedAnimTargetArray();
};

