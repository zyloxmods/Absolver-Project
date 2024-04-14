#pragma once
#include "CoreMinimal.h"
#include "LootBaseItemStruct.h"
#include "GameModeLootStruct.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FGameModeLootStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootBaseItemStruct> m_Loot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fProbaWeigth;
    
    FGameModeLootStruct();
};

