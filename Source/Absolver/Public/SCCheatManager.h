#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SCCheatManager.generated.h"

class UCheatDB;
class UGameInstance;

UCLASS(Blueprintable)
class ABSOLVER_API USCCheatManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCheatDB* m_cheatDB;
    
public:
    USCCheatManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SkipMovesetTutorial(UGameInstance* _gameInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FillInventoryWithEquipment(UGameInstance* _gameInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreAllAttacksUnlocked(UGameInstance* _gameInstance);
    
};

