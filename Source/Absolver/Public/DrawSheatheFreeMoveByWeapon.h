#pragma once
#include "CoreMinimal.h"
#include "DrawSheatheFreeMoveBySpeedState.h"
#include "DrawSheatheFreeMoveByWeapon.generated.h"

USTRUCT(BlueprintType)
struct FDrawSheatheFreeMoveByWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDrawSheatheFreeMoveBySpeedState m_Array[3];
    
    ABSOLVER_API FDrawSheatheFreeMoveByWeapon();
};

