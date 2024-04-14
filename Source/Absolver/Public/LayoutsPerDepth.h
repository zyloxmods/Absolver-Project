#pragma once
#include "CoreMinimal.h"
#include "LayoutsArray.h"
#include "LayoutsPerDepth.generated.h"

USTRUCT(BlueprintType)
struct FLayoutsPerDepth {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLayoutsArray> m_LayoutsPerDepth;
    
    ABSOLVER_API FLayoutsPerDepth();
};

