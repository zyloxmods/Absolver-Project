#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "StreamingActionPerRoomList.h"
#include "USerStreamingActions.generated.h"

USTRUCT(BlueprintType)
struct FUSerStreamingActions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl m_User;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FStreamingActionPerRoomList m_RoomsActions;
    
    ABSOLVER_API FUSerStreamingActions();
};

