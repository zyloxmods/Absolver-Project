#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingCompleteResult.h"
#include "PlayerInfos.h"
#include "MatchMakingResults.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FMatchMakingResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchmakingCompleteResult m_eMatchMakingResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerInfos> m_Players;
    
    FMatchMakingResults();
};

