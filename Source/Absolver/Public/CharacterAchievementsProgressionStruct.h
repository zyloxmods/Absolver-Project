#pragma once
#include "CoreMinimal.h"
#include "CharacterAchievementsProgressionStruct.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FCharacterAchievementsProgressionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_iCairnsOpenend;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_PvEKillingAchievementsProgression[10];
    
    FCharacterAchievementsProgressionStruct();
};

