#pragma once
#include "CoreMinimal.h"
#include "EGameModePlayerAnswers.generated.h"

UENUM(BlueprintType)
enum class EGameModePlayerAnswers : uint8 {
    None,
    ReadyToStart,
    ReadyForRematch,
    NoRematch,
    Initialized,
    LevelReady,
    LevelLoaded,
    CountDownStarted,
    ReadyToLaunchCutscene,
    ReadyToExitCutscene,
    ReadyToResumeGP,
    Count,
};

