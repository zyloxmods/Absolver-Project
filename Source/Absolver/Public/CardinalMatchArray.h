#pragma once
#include "CoreMinimal.h"
#include "ECardinalPoints.h"
#include "CardinalMatchArray.generated.h"

USTRUCT(BlueprintType)
struct FCardinalMatchArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECardinalPoints> m_Array;
    
    ABSOLVER_API FCardinalMatchArray();
};

