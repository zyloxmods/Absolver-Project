#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RarityData.generated.h"

class UMaterial;

USTRUCT(BlueprintType)
struct ABSOLVER_API FRarityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* m_Material;
    
    FRarityData();
};

