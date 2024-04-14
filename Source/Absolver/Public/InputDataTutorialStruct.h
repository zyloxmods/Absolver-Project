#pragma once
#include "CoreMinimal.h"
#include "EControllerIconAxisTypes.h"
#include "EInputDataTutorialDisplayConstraints.h"
#include "InputAction.h"
#include "InputDataTutorialStruct.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct ABSOLVER_API FInputDataTutorialStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_PrefixText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericInputData* m_InputDataPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericInputData* m_InputDataMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerIconAxisTypes m_eAxisType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_SuffixText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputDataTutorialDisplayConstraints m_InputDataTutorialDisplayConstraint;
    
    FInputDataTutorialStruct();
};

