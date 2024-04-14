#pragma once
#include "CoreMinimal.h"
#include "PlayerSeasonInfos.h"
#include "School.h"
#include "SchoolMember.h"
#include "SchoolSeasonInfos.h"
#include "SchoolStats.h"
#include "PlayerMentoringInfos.generated.h"

USTRUCT(BlueprintType)
struct FPlayerMentoringInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchoolMember m_player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchool m_School;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchoolStats m_schoolStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSeasonInfos m_playerSeasonInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchoolSeasonInfos m_schoolSeasonInfos;
    
    ABSOLVER_API FPlayerMentoringInfos();
};

