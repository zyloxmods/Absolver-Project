#pragma once
#include "CoreMinimal.h"
#include "EFightingActionState.h"
#include "HUDUserWidget.h"
#include "AdversarialHUD.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UAdversarialHUD : public UHUDUserWidget {
    GENERATED_BODY()
public:
    UAdversarialHUD();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFightingActionState BPF_GetCurrentLocalPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnStartCountDownUpdated(int32 _iNewTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEndGame();
    
};

