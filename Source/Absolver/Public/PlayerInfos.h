#pragma once
#include "CoreMinimal.h"
#include "PlayerInfos.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FPlayerInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_PlayerDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iTeam;
    
    FPlayerInfos();
};

