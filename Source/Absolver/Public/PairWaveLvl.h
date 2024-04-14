#pragma once
#include "CoreMinimal.h"
#include "PairWaveLvl.generated.h"

USTRUCT(BlueprintType)
struct FPairWaveLvl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMinWaveLvl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxWaveLvl;
    
    ABSOLVER_API FPairWaveLvl();
};

