#pragma once
#include "CoreMinimal.h"
#include "CancelAnimContainerQuadrantArray.h"
#include "CancelAnimContainerWeaponArray.generated.h"

USTRUCT(BlueprintType)
struct FCancelAnimContainerWeaponArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCancelAnimContainerQuadrantArray m_Array[3];
    
    ABSOLVER_API FCancelAnimContainerWeaponArray();
};

