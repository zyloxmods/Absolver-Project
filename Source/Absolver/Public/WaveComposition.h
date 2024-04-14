#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PairWaveLvl.h"
#include "WaveComposition.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UWaveComposition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPairWaveLvl> m_WaveLvl;
    
    UWaveComposition();

};

