#pragma once
#include "CoreMinimal.h"
#include "PlayerAchievementsProgressionStruct.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FPlayerAchievementsProgressionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 m_PlayerCharacterKilled;
    
    FPlayerAchievementsProgressionStruct();
};

