#pragma once
#include "CoreMinimal.h"
#include "LockMoveAnimSex.h"
#include "LockMoveAnimWeapon.generated.h"

USTRUCT(BlueprintType)
struct FLockMoveAnimWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockMoveAnimSex m_Array[3];
    
    ABSOLVER_API FLockMoveAnimWeapon();
};

