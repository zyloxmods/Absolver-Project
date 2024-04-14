#pragma once
#include "CoreMinimal.h"
#include "ButtonUserWidget.h"
#include "EquipmentPresetButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UEquipmentPresetButton : public UButtonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iPresetIndex;
    
public:
    UEquipmentPresetButton();

    UFUNCTION(BlueprintCallable)
    void BPF_EquipPreset();
    
};

