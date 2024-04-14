#pragma once
#include "CoreMinimal.h"
#include "SpeedStateBlendDescription.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSpeedStateBlendDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_BlendCurve;
    
    ABSOLVER_API FSpeedStateBlendDescription();
};

