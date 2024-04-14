#pragma once
#include "CoreMinimal.h"
#include "CameraTransitionInfoPairStruct.generated.h"

class UCameraData;
class UCameraTransitionInfo;

USTRUCT(BlueprintType)
struct ABSOLVER_API FCameraTransitionInfoPairStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraData* m_CameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraTransitionInfo* m_CameraTransitionInfo;
    
    FCameraTransitionInfoPairStruct();
};

