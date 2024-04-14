#pragma once
#include "CoreMinimal.h"
#include "GenericInputData.h"
#include "InterchangeableInputData.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UInterchangeableInputData : public UGenericInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGenericInputData*> m_InputDataArray;
    
    UInterchangeableInputData();

};

