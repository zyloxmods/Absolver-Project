#pragma once
#include "CoreMinimal.h"
#include "ECharacterProgressionRewardTypes.h"
#include "ProgressionRewardArray.generated.h"

USTRUCT(BlueprintType)
struct FProgressionRewardArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECharacterProgressionRewardTypes> m_WeaponRewards;
    
    ABSOLVER_API FProgressionRewardArray();
};

