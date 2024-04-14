#pragma once
#include "CoreMinimal.h"
#include "MenuSlot.h"
#include "ComboSlot.generated.h"

class USCButton;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UComboSlot : public UMenuSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ComboName;
    
    UComboSlot();

private:
    UFUNCTION(BlueprintCallable)
    void OnButtonGetFocus(USCButton* _button);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_BindMainButton(USCButton* _button);
    
};

