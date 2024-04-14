#pragma once
#include "CoreMinimal.h"
#include "TransitionAnimSex.h"
#include "TransitionAnimWeapon.generated.h"

USTRUCT(BlueprintType)
struct FTransitionAnimWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransitionAnimSex m_Array[3];
    
    ABSOLVER_API FTransitionAnimWeapon();
};

