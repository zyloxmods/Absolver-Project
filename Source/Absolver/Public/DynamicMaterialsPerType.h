#pragma once
#include "CoreMinimal.h"
#include "DynamicMaterialsPerType.generated.h"

class UMaterialInstance;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FDynamicMaterialsPerType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> m_DynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> m_RefMaterials;
    
    ABSOLVER_API FDynamicMaterialsPerType();
};

