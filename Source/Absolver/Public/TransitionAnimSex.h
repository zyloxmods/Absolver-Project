#pragma once
#include "CoreMinimal.h"
#include "TransitionAnimTransitionType.h"
#include "TransitionAnimSex.generated.h"

USTRUCT(BlueprintType)
struct FTransitionAnimSex {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransitionAnimTransitionType m_Array[2];
    
    ABSOLVER_API FTransitionAnimSex();
};

