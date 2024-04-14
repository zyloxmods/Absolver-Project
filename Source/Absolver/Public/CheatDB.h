#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CheatDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UCheatDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllAttacksUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSkipMovesetTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFillInventoryWithEquipment;
    
    UCheatDB();

};

