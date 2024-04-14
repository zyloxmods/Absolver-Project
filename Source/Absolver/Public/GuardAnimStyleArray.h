#pragma once
#include "CoreMinimal.h"
#include "GuardAnimStyleArray.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FGuardAnimStyleArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> m_Array;
    
    ABSOLVER_API FGuardAnimStyleArray();
};

