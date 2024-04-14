#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ECoopGameModeAnswerStatus.h"
#include "CoopGroupMemberInfo.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FCoopGroupMemberInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl m_UniqueNetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoopGameModeAnswerStatus m_eAnswerStatus;
    
    FCoopGroupMemberInfo();
};

