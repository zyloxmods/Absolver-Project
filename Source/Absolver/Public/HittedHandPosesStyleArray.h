#pragma once
#include "CoreMinimal.h"
#include "HittedHandPosesWeaponArray.h"
#include "HittedHandPosesStyleArray.generated.h"

USTRUCT(BlueprintType)
struct FHittedHandPosesStyleArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHittedHandPosesWeaponArray> m_Array;
    
    ABSOLVER_API FHittedHandPosesStyleArray();
};

