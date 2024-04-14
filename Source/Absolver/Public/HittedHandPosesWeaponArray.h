#pragma once
#include "CoreMinimal.h"
#include "HittedHandPosesQuadrantArray.h"
#include "HittedHandPosesWeaponArray.generated.h"

USTRUCT(BlueprintType)
struct FHittedHandPosesWeaponArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FHittedHandPosesQuadrantArray m_Array[3];
    
    ABSOLVER_API FHittedHandPosesWeaponArray();
};

