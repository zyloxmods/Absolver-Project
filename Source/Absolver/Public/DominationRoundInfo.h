#pragma once
#include "CoreMinimal.h"
#include "DominationRoundInfo.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FDominationRoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iTeam1ExhaustedAreaCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iTeam2ExhaustedAreaCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDuration;
    
    FDominationRoundInfo();
};

