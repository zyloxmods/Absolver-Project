#pragma once
#include "CoreMinimal.h"
#include "FreeMoveAnimSex.h"
#include "FreeMoveAnimWeapon.generated.h"

USTRUCT(BlueprintType)
struct FFreeMoveAnimWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFreeMoveAnimSex m_Array[3];
    
    ABSOLVER_API FFreeMoveAnimWeapon();
};

