#pragma once
#include "CoreMinimal.h"
#include "ControllerAxisTypeIcons.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct ABSOLVER_API FControllerAxisTypeIcons {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_AxisTypeIcons[4];
    
    FControllerAxisTypeIcons();
};

