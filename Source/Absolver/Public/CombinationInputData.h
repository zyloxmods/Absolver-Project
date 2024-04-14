#pragma once
#include "CoreMinimal.h"
#include "GenericInputData.h"
#include "CombinationInputData.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UCombinationInputData : public UGenericInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGenericInputData*> m_InputDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGenericInputData*> m_ExcludedInputDataArray;
    
    UCombinationInputData();

};

