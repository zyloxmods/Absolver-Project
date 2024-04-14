#pragma once
#include "CoreMinimal.h"
#include "StreamingActionPerRoom.h"
#include "StreamingActionPerRoomList.generated.h"

USTRUCT(BlueprintType)
struct FStreamingActionPerRoomList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FStreamingActionPerRoom> m_StreamingActionPerRoom;
    
    ABSOLVER_API FStreamingActionPerRoomList();
};

