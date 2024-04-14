#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WaveObjectiveConfig.generated.h"

class UWaveConfig;

UCLASS(Blueprintable)
class ABSOLVER_API UWaveObjectiveConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWaveConfig*> m_WaveConfigs;
    
    UWaveObjectiveConfig();

};

