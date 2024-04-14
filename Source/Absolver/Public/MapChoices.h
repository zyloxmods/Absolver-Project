#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "MenuItem.h"
#include "Templates/SubclassOf.h"
#include "MapChoices.generated.h"

class UMapSlot;
class UScrollBox;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UMapChoices : public UMenuItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapSlot> m_MapButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin m_SlotsPadding;
    
public:
    UMapChoices();

    UFUNCTION(BlueprintCallable)
    void BPF_SetMapScrollBox(UScrollBox* _box);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DisplayAndFillMapChoices();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SetStatusHostServer(UUserWidget* _mapSlotWidget, bool _bLaunchHostServer);
    
};

