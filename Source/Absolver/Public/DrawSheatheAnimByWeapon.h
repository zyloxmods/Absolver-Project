#pragma once
#include "CoreMinimal.h"
#include "DrawSheatheAnimByQuadrant.h"
#include "DrawSheatheAnimByWeapon.generated.h"

USTRUCT(BlueprintType)
struct FDrawSheatheAnimByWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDrawSheatheAnimByQuadrant m_Array[3];
    
    ABSOLVER_API FDrawSheatheAnimByWeapon();
};

