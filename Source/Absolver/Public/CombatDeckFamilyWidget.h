#pragma once
#include "CoreMinimal.h"
#include "EWeaponFamilies.h"
#include "SCUserWidget.h"
#include "CombatDeckFamilyWidget.generated.h"

class UCombatDeckFamilyWidget;
class UImage;
class USCButton;
class UTextBlock;
class UTexture2D;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UCombatDeckFamilyWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFocusDelegate, UCombatDeckFamilyWidget*, Widget);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Text;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusDelegate OnWidgetFocusReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusDelegate OnWidgetFocusLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusDelegate OnWidgetClicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponFamilies m_WeaponFamily;
    
    UCombatDeckFamilyWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnButtonFocusLost(USCButton* _button);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonFocused(USCButton* _button);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateEditorPreview(UImage* _iconImage, UTextBlock* _text);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Initialize(UWidget* _focusedWidget, UImage* _iconImage, UTextBlock* _text, USCButton* _button);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USCButton* BPF_GetButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSynchronizeProperties();
    
};

