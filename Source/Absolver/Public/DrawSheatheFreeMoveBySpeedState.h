#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "DrawSheatheFreeMoveBySpeedState.generated.h"

USTRUCT(BlueprintType)
struct FDrawSheatheFreeMoveBySpeedState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_Array[4];
    
    ABSOLVER_API FDrawSheatheFreeMoveBySpeedState();
};

