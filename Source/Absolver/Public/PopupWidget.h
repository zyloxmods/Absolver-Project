#pragma once
#include "CoreMinimal.h"
#include "EMenuEnum.h"
#include "InputAction.h"
#include "SCUserWidget.h"
#include "PopupWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UPopupWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UPopupWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnMenuChanged(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInternalInputPressed(InputAction _eInput, bool& _bHandled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_OnChoseB();
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnChoseA();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SetContent(const FText& _title, const FText& _message, const FText& _choiceA, const FText& _choiceB);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnInputPressed(InputAction _eInput, bool& _bHandled);
    
};

