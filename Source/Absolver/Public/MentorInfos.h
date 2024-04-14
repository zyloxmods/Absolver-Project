#pragma once
#include "CoreMinimal.h"
#include "MentorInfos.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FMentorInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> m_Attacks;
    
    FMentorInfos();
};

