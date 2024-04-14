#pragma once
#include "CoreMinimal.h"
#include "CharacterProgressionUnlockDB.h"
#include "CharacterProgressionUnlockSchoolFightingStyleDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UCharacterProgressionUnlockSchoolFightingStyleDB : public UCharacterProgressionUnlockDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_NotificationText;
    
    UCharacterProgressionUnlockSchoolFightingStyleDB();

};

