#pragma once
#include "CoreMinimal.h"
#include "SpawnerGroupLayer.generated.h"

class AAISpawner;

USTRUCT(BlueprintType)
struct FSpawnerGroupLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLevelMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLevelMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFixedSituation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISpawner*> m_Spawners;
    
    ABSOLVER_API FSpawnerGroupLayer();
};

