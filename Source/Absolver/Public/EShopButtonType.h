#pragma once
#include "CoreMinimal.h"
#include "EShopButtonType.generated.h"

UENUM(BlueprintType)
enum class EShopButtonType : uint8 {
    Equipment,
    Weapon,
    Emote,
    Intro1v1,
    Powers,
    None,
};

