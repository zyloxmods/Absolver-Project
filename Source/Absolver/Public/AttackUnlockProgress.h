#pragma once
#include "CoreMinimal.h"
#include "AttackUnlockProgress.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FAttackUnlockProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_iXP;
    
    FAttackUnlockProgress();
};

