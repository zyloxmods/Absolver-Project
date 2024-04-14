#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AIFeintBehaviourDataAsset.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UAIFeintBehaviourDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDefaultFeintGaugeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTriggerFeintThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFeintGaugeBonus[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseProbaToTriggerFeint;
    
    UAIFeintBehaviourDataAsset();

};

