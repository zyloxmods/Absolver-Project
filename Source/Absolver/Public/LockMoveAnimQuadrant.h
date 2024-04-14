#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "BlendSpaceContainer.h"
#include "LockMoveAnimQuadrant.generated.h"

USTRUCT(BlueprintType)
struct FLockMoveAnimQuadrant {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_ContainerArray[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlendSpaceContainer m_BlendSpaceContainerArray[4];
    
    ABSOLVER_API FLockMoveAnimQuadrant();
};

