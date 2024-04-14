#pragma once
#include "CoreMinimal.h"
#include "EGetPlayerMentoringInfoTypes.generated.h"

UENUM(BlueprintType)
enum class EGetPlayerMentoringInfoTypes : uint8 {
    NONE,
    GetPlayer,
    GetSchool,
    GetSchoolStats,
    GetSchoolSeasonInfos = 6,
    GetPlayerSeasonInfos,
    NB,
};

