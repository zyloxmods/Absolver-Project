#pragma once
#include "CoreMinimal.h"
#include "RetrieveLostItemStruct.generated.h"

class UBaseItemData;

USTRUCT(BlueprintType)
struct FRetrieveLostItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseItemData* m_ItemOwned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseItemData* m_ItemToGetIfOwned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCheckReciprocity;
    
    ABSOLVER_API FRetrieveLostItemStruct();
};

