#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WaveCompo.h"
#include "WaveConfig.generated.h"

class UWaveDescriptionDB;

UCLASS(Blueprintable)
class ABSOLVER_API UWaveConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWaveDescriptionDB*> m_Waves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeBetweenWaves;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_afTimeBetweenSpawns[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaveCompo> m_WaveCompositions;
    
    UWaveConfig();

};

