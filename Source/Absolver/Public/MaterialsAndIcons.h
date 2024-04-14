#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GenderMaterials.h"
#include "MaterialsAndIcons.generated.h"

class UParticleSystem;
class UTexture2D;

USTRUCT(BlueprintType)
struct FMaterialsAndIcons {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGenderMaterials> m_Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_InventoryIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_OverridePS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_OverrideFXVectorParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOverrideFXFloatParameter;
    
    ABSOLVER_API FMaterialsAndIcons();
};

