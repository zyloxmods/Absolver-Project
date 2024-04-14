#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "HittedAnimWeaponArray.generated.h"

USTRUCT(BlueprintType)
struct FHittedAnimWeaponArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_ContainerArray[3];
    
    ABSOLVER_API FHittedAnimWeaponArray();
};

