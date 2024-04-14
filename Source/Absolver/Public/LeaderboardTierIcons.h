#pragma once
#include "CoreMinimal.h"
#include "LeaderboardTierIcons.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLeaderboardTierIcons {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_Textures[3];
    
    ABSOLVER_API FLeaderboardTierIcons();
};

