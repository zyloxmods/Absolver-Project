#pragma once
#include "CoreMinimal.h"
#include "SpeedStateBlendDescription.h"
#include "SpeedStateBlendTo.generated.h"

USTRUCT(BlueprintType)
struct FSpeedStateBlendTo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpeedStateBlendDescription m_BlendDescription[4];
    
    ABSOLVER_API FSpeedStateBlendTo();
};

