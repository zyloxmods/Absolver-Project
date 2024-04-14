#pragma once
#include "CoreMinimal.h"
#include "LockMoveAnimQuadrant.h"
#include "LockMoveAnimSex.generated.h"

USTRUCT(BlueprintType)
struct FLockMoveAnimSex {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockMoveAnimQuadrant m_Array[2];
    
    ABSOLVER_API FLockMoveAnimSex();
};

