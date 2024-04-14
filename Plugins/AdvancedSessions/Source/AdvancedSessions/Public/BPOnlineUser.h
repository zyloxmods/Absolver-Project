#pragma once
#include "CoreMinimal.h"
#include "BPUniqueNetId.h"
#include "BPOnlineUser.generated.h"

USTRUCT(BlueprintType)
struct FBPOnlineUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPUniqueNetId UniqueNetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RealName;
    
    ADVANCEDSESSIONS_API FBPOnlineUser();
};

