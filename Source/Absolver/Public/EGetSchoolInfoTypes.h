#pragma once
#include "CoreMinimal.h"
#include "EGetSchoolInfoTypes.generated.h"

UENUM(BlueprintType)
enum class EGetSchoolInfoTypes : uint8 {
    NONE,
    MEMBERS,
    CONTENT,
    SEASON_INFOS,
    NB,
};

