#pragma once
#include "CoreMinimal.h"
#include "BonusPointsStep.generated.h"

USTRUCT(BlueprintType)
struct FBonusPointsStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fResourcesNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDamageReceivedMultiplier;
    
    ABSOLVER_API FBonusPointsStep();
};

