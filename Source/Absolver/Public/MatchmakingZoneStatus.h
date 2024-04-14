#pragma once
#include "CoreMinimal.h"
#include "MatchmakingZoneStatus.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingZoneStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiZoneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiSubZoneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiOpenedGates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiOpenedGhostGates;
    
    ABSOLVER_API FMatchmakingZoneStatus();
};

