#pragma once
#include "CoreMinimal.h"
#include "GenderMaterials.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FGenderMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> m_Materials[2];
    
    ABSOLVER_API FGenderMaterials();
};

