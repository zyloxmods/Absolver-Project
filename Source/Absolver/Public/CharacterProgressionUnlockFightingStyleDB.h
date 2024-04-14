#pragma once
#include "CoreMinimal.h"
#include "CharacterProgressionUnlockDB.h"
#include "CharacterProgressionUnlockFightingStyleDB.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ABSOLVER_API UCharacterProgressionUnlockFightingStyleDB : public UCharacterProgressionUnlockDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCharacterBuildFSIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_NotificationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> m_FightingStyleIcons;
    
    UCharacterProgressionUnlockFightingStyleDB();

};

