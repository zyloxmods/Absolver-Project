#pragma once
#include "CoreMinimal.h"
#include "GatherTrapDescription.generated.h"

USTRUCT(BlueprintType)
struct FGatherTrapDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUsed;
    
    ABSOLVER_API FGatherTrapDescription();
};

