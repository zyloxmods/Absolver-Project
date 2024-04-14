#pragma once
#include "CoreMinimal.h"
#include "GameModeCategoryRewardStruct.h"
#include "GameModeRewardStruct.generated.h"

USTRUCT(BlueprintType)
struct FGameModeRewardStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameModeCategoryRewardStruct m_Finished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameModeCategoryRewardStruct m_Victory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameModeCategoryRewardStruct m_Performance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameModeCategoryRewardStruct m_Mentoring;
    
    ABSOLVER_API FGameModeRewardStruct();
};

