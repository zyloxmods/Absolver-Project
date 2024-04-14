#pragma once
#include "CoreMinimal.h"
#include "SCPlayerController.h"
#include "SpectatorController.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API ASpectatorController : public ASCPlayerController {
    GENERATED_BODY()
public:
    ASpectatorController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void BPF_ExitSpectatorMode();
    
};

