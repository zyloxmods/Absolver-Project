#pragma once
#include "CoreMinimal.h"
#include "GenericVoiceOverPerDepth.h"
#include "GenericVoiceOverPerTheme.generated.h"

USTRUCT(BlueprintType)
struct FGenericVoiceOverPerTheme {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGenericVoiceOverPerDepth> m_VoiceOverPerDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGenericVoiceOverPerDepth> m_BossVoiceOverPerDepth;
    
    ABSOLVER_API FGenericVoiceOverPerTheme();
};

