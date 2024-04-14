#pragma once
#include "CoreMinimal.h"
#include "EVariableWeightType.generated.h"

UENUM(BlueprintType)
enum class EVariableWeightType : uint8 {
    Nothing,
    FullBody,
    UpperBody,
    Hitted_High_Light,
    Hitted_High_Medium,
    Hitted_Mid_Light,
    Hitted_Mid_Medium,
    Hitted_Low_Light,
    Hitted_Low_Medium,
    Draw_Sword,
    LockMode_UpperBody,
    Count,
};

