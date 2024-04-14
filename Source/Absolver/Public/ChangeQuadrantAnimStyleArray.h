#pragma once
#include "CoreMinimal.h"
#include "ChangeQuadrantAnimWeaponArray.h"
#include "ChangeQuadrantAnimStyleArray.generated.h"

USTRUCT(BlueprintType)
struct FChangeQuadrantAnimStyleArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChangeQuadrantAnimWeaponArray> m_Array;
    
    ABSOLVER_API FChangeQuadrantAnimStyleArray();
};

