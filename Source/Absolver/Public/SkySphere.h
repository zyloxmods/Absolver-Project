#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SkySphere.generated.h"

class UMaterialInstance;

UCLASS(Blueprintable)
class ABSOLVER_API ASkySphere : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* BaseMaterial;
    
    ASkySphere(const FObjectInitializer& ObjectInitializer);

};

