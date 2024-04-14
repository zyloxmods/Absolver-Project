#pragma once
#include "CoreMinimal.h"
#include "FidgetAnimQuadrantArray.h"
#include "FidgetAnimWeaponArray.generated.h"

USTRUCT(BlueprintType)
struct FFidgetAnimWeaponArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFidgetAnimQuadrantArray m_Array[3];
    
    ABSOLVER_API FFidgetAnimWeaponArray();
};

