#pragma once
#include "CoreMinimal.h"
#include "FreeMoveAnimWeapon.h"
#include "FreeMoveAnimSpeedState.generated.h"

USTRUCT(BlueprintType)
struct FFreeMoveAnimSpeedState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFreeMoveAnimWeapon m_Array[4];
    
    ABSOLVER_API FFreeMoveAnimSpeedState();
};

