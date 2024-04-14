#pragma once
#include "CoreMinimal.h"
#include "GatherBankDescription.generated.h"

USTRUCT(BlueprintType)
struct FGatherBankDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iResourceAmount;
    
    ABSOLVER_API FGatherBankDescription();
};

