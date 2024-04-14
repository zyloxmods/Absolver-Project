#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CameraNodeStruct.h"
#include "CameraTransitionInfoPairStruct.h"
#include "CameraData.generated.h"

class UCameraTransitionInfo;

UCLASS(Blueprintable)
class ABSOLVER_API UCameraData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraNodeStruct m_CameraNodeStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraTransitionInfoPairStruct> m_CameraTransitionDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraTransitionInfo* m_DefaultCameraTransition;
    
    UCameraData();

};

