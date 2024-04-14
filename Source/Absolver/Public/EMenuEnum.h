#pragma once
#include "CoreMinimal.h"
#include "EMenuEnum.generated.h"

UENUM(BlueprintType)
enum class EMenuEnum : uint8 {
    InGameMenu,
    InGameEquipment,
    InGameCombatDeck,
    InGameInventory,
    InGameStatus,
    InGameOption,
    InGameQuit,
    CombatDeckTraining,
    CombatDeckStanceSelection,
    CombatDeckStanceEdition,
    CombatDeckAttackSelection,
    EndGameMenu,
    AltarMenu,
    DownMenu,
    GameModeSelectionMenu,
    StartupMenu,
    InGameSocial,
    InGameGraphicOptions,
    CreateSchool,
    SchoolMenu,
    NewGameMenu,
    InGameInputsMapping,
    Credits,
    GameplayOptionMenu,
    LootBoxMenu,
    ShopMenu,
    Count,
    None,
};

