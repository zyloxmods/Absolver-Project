#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SpecialAbilityPropertyDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API USpecialAbilityPropertyDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuccessGuardGaugeRefill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSuccessShardRefill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPushLayerOnSuccess;
    
    USpecialAbilityPropertyDB();

};

