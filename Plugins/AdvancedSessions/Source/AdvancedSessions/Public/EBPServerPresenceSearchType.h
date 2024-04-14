#pragma once
#include "CoreMinimal.h"
#include "EBPServerPresenceSearchType.generated.h"

UENUM(BlueprintType)
enum class EBPServerPresenceSearchType : uint8 {
    AllServers,
    ClientServersOnly,
    DedicatedServersOnly,
};

