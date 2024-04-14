#pragma once
#include "CoreMinimal.h"
#include "TransitionAnimWeapon.h"
#include "TransitionAnimStyle.generated.h"

USTRUCT(BlueprintType)
struct FTransitionAnimStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransitionAnimWeapon> m_Array;
    
    ABSOLVER_API FTransitionAnimStyle();
};

