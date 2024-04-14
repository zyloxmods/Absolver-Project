#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ControllerKeyIcons.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct ABSOLVER_API FControllerKeyIcons {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey m_Key;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_Icons[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShowText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_ReplacementText;
    
    FControllerKeyIcons();
};

