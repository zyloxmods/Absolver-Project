#pragma once
#include "CoreMinimal.h"
#include "ChestState.h"
#include "GatherChestDescription.generated.h"

USTRUCT(BlueprintType)
struct FGatherChestDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChestState> m_ChestStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSeedForLoot;
    
    ABSOLVER_API FGatherChestDescription();
};

