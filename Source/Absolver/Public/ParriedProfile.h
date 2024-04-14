#pragma once
#include "CoreMinimal.h"
#include "EBlendType.h"
#include "ParriedProfile.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FParriedProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fParriedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlendType m_eParriedReorientationBlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_ParriedReorientationCurve;
    
    ABSOLVER_API FParriedProfile();
};

