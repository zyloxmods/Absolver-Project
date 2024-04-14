#pragma once
#include "CoreMinimal.h"
#include "ELootBoxType.h"
#include "LootBoxInstancedData.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FLootBoxInstancedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_iGMLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ELootBoxType m_Type;
    
    FLootBoxInstancedData();
};

