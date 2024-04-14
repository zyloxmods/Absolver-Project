#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AIBaseBehaviourDataAsset.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UAIBaseBehaviourDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProbabilityDepletedPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fInitialProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCooldown;
    
    UAIBaseBehaviourDataAsset();

};

