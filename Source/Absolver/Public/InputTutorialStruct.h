#pragma once
#include "CoreMinimal.h"
#include "InputDataTutorialStruct.h"
#include "InputTutorialStruct.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FInputTutorialStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputDataTutorialStruct> m_InputSequence;
    
    FInputTutorialStruct();
};

