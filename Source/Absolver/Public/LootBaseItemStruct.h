#pragma once
#include "CoreMinimal.h"
#include "LootBaseItemStruct.generated.h"

class UBaseItemData;

USTRUCT(BlueprintType)
struct ABSOLVER_API FLootBaseItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseItemData* m_Item;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 m_uiItemNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiMaterialIndex;
    
    FLootBaseItemStruct();
};

