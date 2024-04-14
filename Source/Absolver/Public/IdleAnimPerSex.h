#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "IdleAnimPerSex.generated.h"

USTRUCT(BlueprintType)
struct FIdleAnimPerSex {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_AnimsPerSex[2];
    
    ABSOLVER_API FIdleAnimPerSex();
};

