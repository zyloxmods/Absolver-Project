#pragma once
#include "CoreMinimal.h"
#include "GenericInputData.h"
#include "InputBehaviourStruct.h"
#include "InputData.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UInputData : public UGenericInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_unrealAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputBehaviourStruct m_BehaviourStruct;
    
    UInputData();

};

