#pragma once
#include "CoreMinimal.h"
#include "LootBoxTypeCountStruct.h"
#include "LootBoxRewardStruct.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FLootBoxRewardStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootBoxTypeCountStruct> m_LootBoxes;
    
    FLootBoxRewardStruct();
};

