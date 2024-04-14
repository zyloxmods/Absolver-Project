#pragma once
#include "CoreMinimal.h"
#include "EHandPoses.h"
#include "DodgeHandPoseWeaponArray.generated.h"

USTRUCT(BlueprintType)
struct FDodgeHandPoseWeaponArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHandPoses m_Array[3];
    
    ABSOLVER_API FDodgeHandPoseWeaponArray();
};

