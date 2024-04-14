#pragma once
#include "CoreMinimal.h"
#include "VoiceOver.h"
#include "GenericVoiceOverPerDepth.generated.h"

USTRUCT(BlueprintType)
struct FGenericVoiceOverPerDepth {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoiceOver> m_VoiceOvers;
    
    ABSOLVER_API FGenericVoiceOverPerDepth();
};

