#pragma once
#include "CoreMinimal.h"
#include "CoopGroupMemberInfo.h"
#include "EGameModeTypes.h"
#include "CoopGroup.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FCoopGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCoopGroupMemberInfo> m_GroupMemberInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameModeTypes m_eGameModeType;
    
    FCoopGroup();
};

