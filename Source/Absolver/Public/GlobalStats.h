#pragma once
#include "CoreMinimal.h"
#include "CharacterStats.h"
#include "GlobalStats.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FGlobalStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterStats m_CharacterStats;
    
    FGlobalStats();
};

