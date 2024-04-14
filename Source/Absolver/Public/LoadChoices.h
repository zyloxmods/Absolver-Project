#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "MenuItem.h"
#include "Templates/SubclassOf.h"
#include "LoadChoices.generated.h"

class ULoadSlot;
class UPanelWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API ULoadChoices : public UMenuItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPanelWidget> m_SlotsBox;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULoadSlot> m_LoadingButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin m_SlotsPadding;
    
public:
    ULoadChoices();

    UFUNCTION(BlueprintCallable)
    void BPF_SetFocusedIndex(uint8 _uiIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_HideWidgetAndSetFocusOnFirstSlot(UWidget* _widget);
    
    UFUNCTION(BlueprintCallable)
    void BPF_FillLoadChoices();
    
    UFUNCTION(BlueprintCallable)
    void BPF_DeleteSelectedSave();
    
};

