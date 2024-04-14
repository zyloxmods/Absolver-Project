#pragma once
#include "CoreMinimal.h"
#include "EFriendListWidgetLoadingState.generated.h"

UENUM(BlueprintType)
enum class EFriendListWidgetLoadingState : uint8 {
    Idle,
    Loading,
    Error,
    Loaded,
};

