#pragma once
#include "CoreMinimal.h"
#include "BPUniqueNetId.h"
#include "EPlatform.h"
#include "RecentPlayerInfos.generated.h"

USTRUCT(BlueprintType)
struct FRecentPlayerInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPUniqueNetId m_NetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlatform m_ePlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSchoolLevel;
    
    ABSOLVER_API FRecentPlayerInfos();
};

