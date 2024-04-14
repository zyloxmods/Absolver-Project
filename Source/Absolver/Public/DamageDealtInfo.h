#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "DamageDealtInfo.generated.h"

USTRUCT(BlueprintType)
struct FDamageDealtInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl m_NetID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiNetBuffer;
    
    ABSOLVER_API FDamageDealtInfo();
};

