#pragma once
#include "CoreMinimal.h"
#include "MenuBasicStatsStruct.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FMenuBasicStatsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShards;
    
    FMenuBasicStatsStruct();
};

