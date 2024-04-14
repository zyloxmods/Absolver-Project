#pragma once
#include "CoreMinimal.h"
#include "EPlayerSorting.generated.h"

UENUM(BlueprintType)
enum class EPlayerSorting : uint8 {
    PlayingThisGame,
    IsOnline,
    IsJoinable,
};

