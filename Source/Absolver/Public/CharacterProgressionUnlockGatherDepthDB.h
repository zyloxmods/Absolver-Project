#pragma once
#include "CoreMinimal.h"
#include "CharacterProgressionUnlockDB.h"
#include "CharacterProgressionUnlockGatherDepthDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UCharacterProgressionUnlockGatherDepthDB : public UCharacterProgressionUnlockDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiDepthIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_NotificationText;
    
    UCharacterProgressionUnlockGatherDepthDB();

};

