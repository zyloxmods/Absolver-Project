#pragma once
#include "CoreMinimal.h"
#include "SchoolTopPlayer.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FSchoolTopPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iScore;
    
    FSchoolTopPlayer();
};

