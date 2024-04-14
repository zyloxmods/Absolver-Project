#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "InteractionTextStruct.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FInteractionTextStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_FirstText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_SecondText;
    
    FInteractionTextStruct();
};

