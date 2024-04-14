#pragma once
#include "CoreMinimal.h"
#include "SCButton.h"
#include "EquipmentSelectionButton.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UEquipmentSelectionButton : public USCButton {
    GENERATED_BODY()
public:
    UEquipmentSelectionButton();

    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
};

