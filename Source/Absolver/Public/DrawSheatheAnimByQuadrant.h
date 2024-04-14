#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "DrawSheatheAnimByQuadrant.generated.h"

USTRUCT(BlueprintType)
struct FDrawSheatheAnimByQuadrant {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_Array[4];
    
    ABSOLVER_API FDrawSheatheAnimByQuadrant();
};

