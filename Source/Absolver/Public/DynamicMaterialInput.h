#pragma once
#include "CoreMinimal.h"
#include "DynamicMaterialInput.generated.h"

USTRUCT(BlueprintType)
struct FDynamicMaterialInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ParameterToUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fValue;
    
    ABSOLVER_API FDynamicMaterialInput();
};

