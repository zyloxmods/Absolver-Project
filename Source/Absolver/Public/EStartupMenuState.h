#pragma once
#include "CoreMinimal.h"
#include "EStartupMenuState.generated.h"

UENUM(BlueprintType)
enum class EStartupMenuState : uint8 {
    IIS,
    IIS_Pressed,
    LoadingProfile,
    ConnectingToServer,
    ConnectionFailed,
    Main,
    Main_SaveLoaded,
    Main_SaveLoadFailed,
    Options,
    Quit,
};

