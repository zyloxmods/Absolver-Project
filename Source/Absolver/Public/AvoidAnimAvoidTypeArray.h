#pragma once
#include "CoreMinimal.h"
#include "AvoidAnimAvoidTypeArray.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAvoidAnimAvoidTypeArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_Array[4];
    
    ABSOLVER_API FAvoidAnimAvoidTypeArray();
};

