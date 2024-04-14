#pragma once
#include "CoreMinimal.h"
#include "Phase.h"
#include "AILevel.generated.h"

USTRUCT(BlueprintType)
struct FAILevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhase> m_Phases;
    
    ABSOLVER_API FAILevel();
};

