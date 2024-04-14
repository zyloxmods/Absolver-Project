#pragma once
#include "CoreMinimal.h"
#include "DrawSheatheAnimByWeapon.h"
#include "DrawSheatheAnimByStyle.generated.h"

USTRUCT(BlueprintType)
struct FDrawSheatheAnimByStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDrawSheatheAnimByWeapon> m_Array;
    
    ABSOLVER_API FDrawSheatheAnimByStyle();
};

