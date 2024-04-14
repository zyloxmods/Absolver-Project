#pragma once
#include "CoreMinimal.h"
#include "ERoomAnchor.h"
#include "EStreamingAction.h"
#include "AnchorStreamingAction.generated.h"

USTRUCT(BlueprintType)
struct FAnchorStreamingAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERoomAnchor m_eAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStreamingAction m_eStreamingAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_uiRoomToModify;
    
    ABSOLVER_API FAnchorStreamingAction();
};

