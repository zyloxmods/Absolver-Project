#pragma once
#include "CoreMinimal.h"
#include "Engine/DPICustomScalingRule.h"
#include "SCCustomDPIScaling.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class ABSOLVER_API USCCustomDPIScaling : public UDPICustomScalingRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBaseRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurveBelowRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurveAboveRatio;
    
    USCCustomDPIScaling();

};

