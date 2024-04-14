#pragma once
#include "CoreMinimal.h"
#include "DodgeHandPoseWeaponArray.h"
#include "DodgeHandPoseFightingStyle.generated.h"

USTRUCT(BlueprintType)
struct FDodgeHandPoseFightingStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDodgeHandPoseWeaponArray> m_Array;
    
    ABSOLVER_API FDodgeHandPoseFightingStyle();
};

