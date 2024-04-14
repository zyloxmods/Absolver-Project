#pragma once
#include "CoreMinimal.h"
#include "GameStateSeed.generated.h"

USTRUCT(BlueprintType)
struct FGameStateSeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSeedSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxDepth;
    
    ABSOLVER_API FGameStateSeed();
};

