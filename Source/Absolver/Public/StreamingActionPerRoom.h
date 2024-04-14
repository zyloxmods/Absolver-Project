#pragma once
#include "CoreMinimal.h"
#include "EStreamingAction.h"
#include "StreamingActionPerRoom.generated.h"

USTRUCT(BlueprintType)
struct FStreamingActionPerRoom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iRoomIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EStreamingAction m_eStreamingAction;
    
    ABSOLVER_API FStreamingActionPerRoom();
};

