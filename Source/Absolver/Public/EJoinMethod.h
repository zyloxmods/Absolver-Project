#pragma once
#include "CoreMinimal.h"
#include "EJoinMethod.generated.h"

UENUM()
enum class EJoinMethod : int32 {
    Default,
    Password,
    Invite,
};

