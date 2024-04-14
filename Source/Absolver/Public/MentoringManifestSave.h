#pragma once
#include "CoreMinimal.h"
#include "LeaderboardInfos.h"
#include "MentoringManifestSave.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FMentoringManifestSave {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint16 m_XPPerEquippedItemDefeat[8];
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint16 m_XPPerEquippedItemVictory[8];
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 m_XPPerLevel[8];
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FLeaderboardInfos m_LeaderboardInfos[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_bInitialized;
    
public:
    FMentoringManifestSave();
};

