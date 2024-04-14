#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ELootBoxType.h"
#include "LootBaseItemStruct.h"
#include "LootBoxInstancedData.h"
#include "LootBoxStaticData.h"
#include "LootBoxDB.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ABSOLVER_API ULootBoxDB : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELootBoxType, FLootBoxStaticData> m_LootBoxTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_SmallLootDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> m_BigLootDataTables;
    
public:
    ULootBoxDB();

    UFUNCTION(BlueprintCallable)
    void BPF_GetLoot(const FLootBoxInstancedData& _LootBoxData, TArray<FLootBaseItemStruct>& Out_LootedItems);
    
};

