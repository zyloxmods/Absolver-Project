#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Bool.h"
#include "PVEFragmentLootDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPVEFragmentLootDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiFragments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iDepthMin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBool m_bTheme[3];
    
    ABSOLVER_API FPVEFragmentLootDataRow();
};

