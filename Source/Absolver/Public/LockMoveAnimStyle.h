#pragma once
#include "CoreMinimal.h"
#include "LockMoveAnimWeapon.h"
#include "LockMoveAnimStyle.generated.h"

USTRUCT(BlueprintType)
struct FLockMoveAnimStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLockMoveAnimWeapon> m_Array;
    
    ABSOLVER_API FLockMoveAnimStyle();
};

