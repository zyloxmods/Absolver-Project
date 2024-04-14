#pragma once
#include "CoreMinimal.h"
#include "DefenseProbabilities.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FDefenseProbabilities {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiDefenseProbabilities[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiDefenseFailProbabilities[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_FailCurvePerBuildUp[3];
    
    ABSOLVER_API FDefenseProbabilities();
};

