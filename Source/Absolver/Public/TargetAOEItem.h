#pragma once
#include "CoreMinimal.h"
#include "UsableItem.h"
#include "TargetAOEItem.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class ABSOLVER_API ATargetAOEItem : public AUsableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iTracksAvoidFakeTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_KnockbackCoefOverDistToInstig;
    
public:
    ATargetAOEItem(const FObjectInitializer& ObjectInitializer);

};

