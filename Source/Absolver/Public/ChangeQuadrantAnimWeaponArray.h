#pragma once
#include "CoreMinimal.h"
#include "ChangeQuadrantAnimStartQuadrantArray.h"
#include "ChangeQuadrantAnimWeaponArray.generated.h"

USTRUCT(BlueprintType)
struct FChangeQuadrantAnimWeaponArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeQuadrantAnimStartQuadrantArray m_Array[3];
    
    ABSOLVER_API FChangeQuadrantAnimWeaponArray();
};

