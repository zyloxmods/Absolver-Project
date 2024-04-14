#pragma once
#include "CoreMinimal.h"
#include "FidgetAnimArray.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FFidgetAnimArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimationAsset*> m_Array;
    
    ABSOLVER_API FFidgetAnimArray();
};

