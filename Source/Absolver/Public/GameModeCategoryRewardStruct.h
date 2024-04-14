#pragma once
#include "CoreMinimal.h"
#include "GameModeCategoryRewardStruct.generated.h"

USTRUCT(BlueprintType)
struct FGameModeCategoryRewardStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiGamePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCharXP;
    
    ABSOLVER_API FGameModeCategoryRewardStruct();
};

