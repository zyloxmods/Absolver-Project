#pragma once
#include "CoreMinimal.h"
#include "BaseNotification.h"
#include "CharacterProgressionReward.h"
#include "ECharacterProgressionRewardTypes.h"
#include "ProgressionRewardNotification.generated.h"

class UCharacterProgressionUnlockDB;
class UProgressionRewardNotification;

UCLASS(Blueprintable)
class UProgressionRewardNotification : public UBaseNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterProgressionRewardTypes m_eRewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterProgressionReward m_Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCharacterProgressionUnlockDB* m_Unlock;
    
    UProgressionRewardNotification();

    UFUNCTION(BlueprintCallable)
    UProgressionRewardNotification* BPF_Init(ECharacterProgressionRewardTypes _eRewardType, FCharacterProgressionReward _reward, UCharacterProgressionUnlockDB* _unlock);
    
};

