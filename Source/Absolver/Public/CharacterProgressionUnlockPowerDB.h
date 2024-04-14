#pragma once
#include "CoreMinimal.h"
#include "CharacterProgressionUnlockDB.h"
#include "CharacterProgressionUnlockPowerDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UCharacterProgressionUnlockPowerDB : public UCharacterProgressionUnlockDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCharacterBuildPowerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_NotificationText;
    
    UCharacterProgressionUnlockPowerDB();

};

