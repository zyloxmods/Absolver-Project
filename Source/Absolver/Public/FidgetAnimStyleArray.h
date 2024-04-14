#pragma once
#include "CoreMinimal.h"
#include "FidgetAnimWeaponArray.h"
#include "FidgetAnimStyleArray.generated.h"

USTRUCT(BlueprintType)
struct FFidgetAnimStyleArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFidgetAnimWeaponArray> m_Array;
    
    ABSOLVER_API FFidgetAnimStyleArray();
};

