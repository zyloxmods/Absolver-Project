#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TintData.generated.h"

USTRUCT(BlueprintType)
struct ABSOLVER_API FTintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_inventoryIconColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_dyeIconColor;
    
    FTintData();
};

