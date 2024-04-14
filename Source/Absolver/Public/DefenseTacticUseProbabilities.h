#pragma once
#include "CoreMinimal.h"
#include "DefenseTacticUseProbabilities.generated.h"

USTRUCT(BlueprintType)
struct FDefenseTacticUseProbabilities {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiSuccessUseProba;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiFailUseProba;
    
    ABSOLVER_API FDefenseTacticUseProbabilities();
};

