#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AIDefensiveDataAsset.generated.h"

UCLASS(Blueprintable)
class UAIDefensiveDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMemoryDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEnterDefensiveDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fExitDefensiveDamageThreshold;
    
    UAIDefensiveDataAsset();

};

