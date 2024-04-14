#pragma once
#include "CoreMinimal.h"
#include "InventoryItem.h"
#include "DLCContent.generated.h"

USTRUCT(BlueprintType)
struct FDLCContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_entitlements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventoryItem> m_Gears;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_Emotes;
    
    ABSOLVER_API FDLCContent();
};

