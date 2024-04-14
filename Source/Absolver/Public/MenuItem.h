#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "MenuItem.generated.h"

class UMenuItem;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UMenuItem : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* m_PreviousWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* m_WidgetToFocusOnCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuItem* m_NextPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowSoundPlaying;
    
    UMenuItem();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnChangeNextWidget(UWidget* _widgetToHide, UWidget* _previousWidget, UWidget* _widgetToFocusOnCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCancelPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnCancelChangeWidget();
    
};

