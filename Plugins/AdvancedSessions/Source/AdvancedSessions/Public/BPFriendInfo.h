#pragma once
#include "CoreMinimal.h"
#include "BPFriendPresenceInfo.h"
#include "BPUniqueNetId.h"
#include "EBPOnlinePresenceState.h"
#include "BPFriendInfo.generated.h"

USTRUCT(BlueprintType)
struct FBPFriendInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RealName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBPOnlinePresenceState OnlineState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPUniqueNetId UniqueNetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingSameGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPFriendPresenceInfo PresenceInfo;
    
    ADVANCEDSESSIONS_API FBPFriendInfo();
};

