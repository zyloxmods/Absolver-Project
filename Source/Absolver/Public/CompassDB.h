#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CompassDB.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class ABSOLVER_API UCompassDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNbTrail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeBetweenTrailElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMinAlpha;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_ReachingDynamicCurve[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_DefautlReachingDynamicCurve;
    
    UCompassDB();

};

