#pragma once
#include "CoreMinimal.h"
#include "StoneInfoPerOfNumPlayers.generated.h"

USTRUCT(BlueprintType)
struct FStoneInfoPerOfNumPlayers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iHealStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iHealCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSelfHealPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAllyHealPower;
    
    ABSOLVER_API FStoneInfoPerOfNumPlayers();
};

