#pragma once
#include "CoreMinimal.h"
#include "School.h"
#include "SchoolSeasonInfos.h"
#include "SchoolStats.h"
#include "SchoolMentoringInfos.generated.h"

USTRUCT(BlueprintType)
struct FSchoolMentoringInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchoolStats m_stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchool m_School;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSchoolSeasonInfos m_seasonInfos;
    
    ABSOLVER_API FSchoolMentoringInfos();
};

