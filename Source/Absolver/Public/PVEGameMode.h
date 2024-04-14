#pragma once
#include "CoreMinimal.h"
#include "AdversarialGameMode.h"
#include "PVEGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class ABSOLVER_API APVEGameMode : public AAdversarialGameMode {
    GENERATED_BODY()
public:
    APVEGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void LoadAllRooms();
    
    UFUNCTION(BlueprintCallable)
    void BPF_CurrentRoomCleared();
    
};

