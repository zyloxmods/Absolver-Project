#pragma once
#include "CoreMinimal.h"
#include "VoiceOver.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FVoiceOver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> m_AudioSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> m_Lines;
    
    ABSOLVER_API FVoiceOver();
};

