#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "DodgeAnimWeaponArray.generated.h"

USTRUCT(BlueprintType)
struct FDodgeAnimWeaponArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_ContainerArray[3];
    
    ABSOLVER_API FDodgeAnimWeaponArray();
};

