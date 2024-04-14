#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemsDB.generated.h"

class UBaseItemData;

UCLASS(Blueprintable)
class ABSOLVER_API UItemsDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBaseItemData*> m_Items;
    
    UItemsDB();

};

