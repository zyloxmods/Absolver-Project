#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "PlayerRestartPoints.generated.h"

class APlayerStart;

USTRUCT(BlueprintType)
struct FPlayerRestartPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl m_UniqueNetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerStart> m_PlayerStart;
    
    ABSOLVER_API FPlayerRestartPoints();
};

