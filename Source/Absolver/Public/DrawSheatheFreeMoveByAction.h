#pragma once
#include "CoreMinimal.h"
#include "DrawSheatheFreeMoveByWeapon.h"
#include "DrawSheatheFreeMoveByAction.generated.h"

USTRUCT(BlueprintType)
struct FDrawSheatheFreeMoveByAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDrawSheatheFreeMoveByWeapon m_Array[4];
    
    ABSOLVER_API FDrawSheatheFreeMoveByAction();
};

