#pragma once
#include "CoreMinimal.h"
#include "GuardUpdateStruct.generated.h"

USTRUCT(BlueprintType)
struct FGuardUpdateStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGuardGaugePercentageTargetValue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_iGuardGuageTargetTime;
    
    ABSOLVER_API FGuardUpdateStruct();
};

