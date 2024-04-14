#pragma once
#include "CoreMinimal.h"
#include "CancelAnimContainerWeaponArray.h"
#include "CancelAnimContainerStyleArray.generated.h"

USTRUCT(BlueprintType)
struct FCancelAnimContainerStyleArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCancelAnimContainerWeaponArray> m_Array;
    
    ABSOLVER_API FCancelAnimContainerStyleArray();
};

