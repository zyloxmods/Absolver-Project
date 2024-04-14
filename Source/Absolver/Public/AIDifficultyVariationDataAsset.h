#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AIDifficultyVariationDataAsset.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UAIDifficultyVariationDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRateOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDamageReceivedToDifficultyBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDamageDealtToDifficultyMalus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDifficultyVariations[8];
    
    UAIDifficultyVariationDataAsset();

};

