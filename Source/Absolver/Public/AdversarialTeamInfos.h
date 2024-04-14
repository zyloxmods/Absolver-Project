#pragma once
#include "CoreMinimal.h"
#include "AdversarialPlayerInfos.h"
#include "AdversarialTeamInfos.generated.h"

USTRUCT(BlueprintType)
struct FAdversarialTeamInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_iTeamIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAdversarialPlayerInfos> m_Players;
    
    ABSOLVER_API FAdversarialTeamInfos();
};

