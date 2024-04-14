#pragma once
#include "CoreMinimal.h"
#include "UsableItem.h"
#include "ShockWaveDamageItem.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class ABSOLVER_API AShockWaveDamageItem : public AUsableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_KnockbackCoefOverDistToInstig;
    
public:
    AShockWaveDamageItem(const FObjectInitializer& ObjectInitializer);

};

