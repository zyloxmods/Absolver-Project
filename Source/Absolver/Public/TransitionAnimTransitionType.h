#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "TransitionAnimTransitionType.generated.h"

USTRUCT(BlueprintType)
struct FTransitionAnimTransitionType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_ContainerArray[38];
    
    ABSOLVER_API FTransitionAnimTransitionType();
};

