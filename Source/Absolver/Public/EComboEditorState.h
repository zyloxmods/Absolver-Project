#pragma once
#include "CoreMinimal.h"
#include "EComboEditorState.generated.h"

UENUM(BlueprintType)
enum class EComboEditorState : uint8 {
    StanceSelection,
    StanceEdition,
    AttackSelection,
    Exit,
    Overview,
    Count,
    None,
};

