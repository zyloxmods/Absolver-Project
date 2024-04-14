#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "MenuItem.h"
#include "Templates/SubclassOf.h"
#include "NetworkMenu.generated.h"

class UScrollBox;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UNetworkMenu : public UMenuItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> m_MapButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin m_SlotsPadding;
    
    UNetworkMenu();

    UFUNCTION(BlueprintCallable)
    void BPF_DisplayServerMaps(UScrollBox* _serverSlots);
    
    UFUNCTION(BlueprintCallable)
    void BPF_DisplayAvailableMaps(UScrollBox* _mapSlots);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SetNetworkMenuInstance(UUserWidget* _networkScrollBoxItem, const FString& _uniqueUserId);
    
};

