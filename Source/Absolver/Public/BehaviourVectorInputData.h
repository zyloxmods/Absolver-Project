#pragma once
#include "CoreMinimal.h"
#include "InputBehaviourStruct.h"
#include "VectorInputData.h"
#include "BehaviourVectorInputData.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UBehaviourVectorInputData : public UVectorInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputBehaviourStruct m_BehaviourStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bConsiderChangingValueAsNewPress;
    
    UBehaviourVectorInputData();

};

