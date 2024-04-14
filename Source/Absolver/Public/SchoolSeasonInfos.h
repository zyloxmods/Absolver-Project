#pragma once
#include "CoreMinimal.h"
#include "SchoolTopPlayer.h"
#include "SchoolSeasonInfos.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FSchoolSeasonInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchoolTopPlayer m_TopPlayer1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchoolTopPlayer m_TopPlayer2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchoolTopPlayer m_TopPlayer3;
    
    FSchoolSeasonInfos();
};

