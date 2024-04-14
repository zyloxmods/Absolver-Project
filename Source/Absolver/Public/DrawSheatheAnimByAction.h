#pragma once
#include "CoreMinimal.h"
#include "DrawSheatheAnimByStyle.h"
#include "DrawSheatheAnimByAction.generated.h"

USTRUCT(BlueprintType)
struct FDrawSheatheAnimByAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDrawSheatheAnimByStyle m_Array[4];
    
    ABSOLVER_API FDrawSheatheAnimByAction();
};

