#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ETrumpetSkewType.h"
#include "TrumpetSkewData.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class ABSOLVER_API UTrumpetSkewData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSkewZoneAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSkewZoneRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrumpetSkewType m_eTrumpetSkewType;
    
    UTrumpetSkewData();

};

