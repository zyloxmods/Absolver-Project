#pragma once
#include "CoreMinimal.h"
#include "ESessionSettingSearchResult.generated.h"

UENUM(BlueprintType)
enum class ESessionSettingSearchResult : uint8 {
    Found,
    NotFound,
    WrongType,
};

