#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ControllerAxisTypeIcons.h"
#include "ControllerAxisIcons.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FControllerAxisIcons {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> m_Keys;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerAxisTypeIcons m_AxisIcons[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShowText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_ReplacementText;
    
    FControllerAxisIcons();
};

