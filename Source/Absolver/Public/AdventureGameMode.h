#pragma once
#include "CoreMinimal.h"
#include "ThePlainesGameMode.h"
#include "AdventureGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class ABSOLVER_API AAdventureGameMode : public AThePlainesGameMode {
    GENERATED_BODY()
public:
    AAdventureGameMode(const FObjectInitializer& ObjectInitializer);

};

