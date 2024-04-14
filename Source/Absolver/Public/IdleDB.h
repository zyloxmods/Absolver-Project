#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EQuadrantTypes.h"
#include "IdleDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UIdleDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fReorientationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fReorientationTimeForEarlyBlendOutFromAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bForceTargetQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eForcedTargetQuadrant;
    
    UIdleDB();

};

