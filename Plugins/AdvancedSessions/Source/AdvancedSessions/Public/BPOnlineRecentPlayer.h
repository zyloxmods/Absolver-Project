#pragma once
#include "CoreMinimal.h"
#include "BPOnlineUser.h"
#include "BPOnlineRecentPlayer.generated.h"

USTRUCT(BlueprintType)
struct FBPOnlineRecentPlayer : public FBPOnlineUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastSeen;
    
    ADVANCEDSESSIONS_API FBPOnlineRecentPlayer();
};

