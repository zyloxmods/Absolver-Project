#pragma once
#include "CoreMinimal.h"
#include "ControllerAxisIcons.h"
#include "ControllerKeyIcons.h"
#include "ControllerIcons.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FControllerIcons {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_Controllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControllerKeyIcons> m_KeyIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControllerAxisIcons> m_AxisIcons;
    
    FControllerIcons();
};

