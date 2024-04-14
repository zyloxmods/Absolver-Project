#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Bool.h"
#include "PVELootDataRow.generated.h"

class UBaseItemData;

USTRUCT(BlueprintType)
struct FPVELootDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseItemData* m_Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLevelMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLevelMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iDepthMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iWeight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBool m_bTheme[3];
    
    ABSOLVER_API FPVELootDataRow();
};

