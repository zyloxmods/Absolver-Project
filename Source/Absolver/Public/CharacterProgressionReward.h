#pragma once
#include "CoreMinimal.h"
#include "ECharacterProgressionRewardConditions.h"
#include "CharacterProgressionReward.generated.h"

class UCharacterProgressionUnlockDB;
class UTexture2D;

USTRUCT(BlueprintType)
struct FCharacterProgressionReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterProgressionRewardConditions m_eUnlockCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iUnlockParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCharacterProgressionUnlockDB*> m_Unlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAddToNewRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_NotificationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_NotificationIcon;
    
    ABSOLVER_API FCharacterProgressionReward();
};

