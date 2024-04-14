#pragma once
#include "CoreMinimal.h"
#include "Shards.generated.h"

class AShardBaseClass;

USTRUCT(BlueprintType)
struct FShards {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShardBaseClass* m_ShardActor;
    
    ABSOLVER_API FShards();
};

