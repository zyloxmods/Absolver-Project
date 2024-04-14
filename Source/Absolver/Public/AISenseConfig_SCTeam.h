#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig.h"
#include "AISenseConfig_SCTeam.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UAISenseConfig_SCTeam : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxPropagationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPropagationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPropagationDeviation;
    
    UAISenseConfig_SCTeam();

};

