#pragma once
#include "CoreMinimal.h"
#include "ComboSave.h"
#include "EWeaponFamilies.h"
#include "SCUserWidget.h"
#include "CombatDeckSlotWidget.generated.h"

class UCombatDeck;
class UCombatDeckSlotWidget;
class USCButton;
class UTexture2D;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UCombatDeckSlotWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTextEditionValidateDelegate, UCombatDeckSlotWidget*, _widget, const FText&, _text);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTextEditionValidatedDelegate, UCombatDeckSlotWidget*, Widget, const FText&, _text);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTextEditionCanceledDelegate, UCombatDeckSlotWidget*, _widget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFocusDelegate, UCombatDeckSlotWidget*, _widget);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusDelegate OnWidgetFocusReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusDelegate OnWidgetFocusLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusDelegate OnWidgetClicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComboSave m_Combo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponFamilies m_eFamily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_CategoryIcon;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextEditionValidateDelegate OnTextEditionValidate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextEditionValidatedDelegate OnTextEditionValidated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextEditionCanceledDelegate OnTextEditionCanceled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCombatDeck> m_CombatDeckMenu;
    
    UCombatDeckSlotWidget();

    UFUNCTION(BlueprintCallable)
    void SetWeaponFamily(EWeaponFamilies _eFamily);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnButtonFocusLost(USCButton* _button);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonFocused(USCButton* _button);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsSlotActive() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_Initialize(UWidget* _focusedWidget, USCButton* _button);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USCButton* BPF_GetButton();
    
};

