#pragma once
#include "CoreMinimal.h"
#include "WaitingPlayerInfo.generated.h"

class APlayerState;
class AProceduralPathBlockers;

USTRUCT(BlueprintType)
struct FWaitingPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerState> m_PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AProceduralPathBlockers> m_Door;
    
    ABSOLVER_API FWaitingPlayerInfo();
};

