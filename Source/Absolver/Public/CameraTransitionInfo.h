#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CameraTransitionInfo.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class ABSOLVER_API UCameraTransitionInfo : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFreezeUnderneathTransition;
    
    UCameraTransitionInfo();

};

