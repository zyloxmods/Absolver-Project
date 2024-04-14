#pragma once
#include "CoreMinimal.h"
#include "WaveCompo.generated.h"

class UWaveComposition;

USTRUCT(BlueprintType)
struct FWaveCompo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWaveComposition* m_WaveCompo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMinLvl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxLvl;
    
    ABSOLVER_API FWaveCompo();
};

