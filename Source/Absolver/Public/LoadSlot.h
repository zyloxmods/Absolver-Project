#pragma once
#include "CoreMinimal.h"
#include "CharacterSaveDescription.h"
#include "MenuSlot.h"
#include "LoadSlot.generated.h"

class ULoadChoices;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API ULoadSlot : public UMenuSlot {
    GENERATED_BODY()
public:
    ULoadSlot();

    UFUNCTION(BlueprintCallable)
    uint8 BPF_GetSlotIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString BPF_GetSaveName() const;
    
    UFUNCTION(BlueprintCallable)
    ULoadChoices* BPF_GetLoadPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_InitSlot(FCharacterSaveDescription _save);
    
};

