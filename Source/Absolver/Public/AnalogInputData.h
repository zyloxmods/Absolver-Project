#pragma once
#include "CoreMinimal.h"
#include "InputData.h"
#include "AnalogInputData.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UAnalogInputData : public UInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_validityThreshold;
    
    UAnalogInputData();

};

