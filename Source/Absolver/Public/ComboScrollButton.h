#pragma once
#include "CoreMinimal.h"
#include "SCButton.h"
#include "ComboScrollButton.generated.h"

class UComboScrollItem;

UCLASS(Blueprintable)
class ABSOLVER_API UComboScrollButton : public USCButton {
    GENERATED_BODY()
public:
    UComboScrollButton();

    UFUNCTION(BlueprintCallable)
    void OnScrollBoxButtonUnFocused(USCButton* _button);
    
    UFUNCTION(BlueprintCallable)
    UComboScrollItem* BPF_GetParentWidget();
    
};

