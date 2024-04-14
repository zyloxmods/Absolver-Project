#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Input/Events.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateBrush.h"
#include "Components/SlateWrapperTypes.h"
#include "ButtonAction.h"
#include "InputAction.h"
#include "SCUserWidget.h"
#include "ButtonUserWidget.generated.h"

class UButtonUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UButtonUserWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidgetSelectedDelegate, UButtonUserWidget*, _button, UButtonUserWidget*, _prevButton);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidgetRightClickDelegate, UButtonUserWidget*, _button, bool, _bWithMouse);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidgetNavigationDelegate, UButtonUserWidget*, _button, EUINavigation, _eNavigation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidgetInputActionDelegate, UButtonUserWidget*, _button, InputAction, _eInput);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonUserWidgetDeselectedDelegate, UButtonUserWidget*, _button);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidgetDelegate, UButtonUserWidget*, _button, EFocusCause, _eCause);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonUserWidgetClickDelegate, UButtonUserWidget*, _button, bool, _bWithMouse);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FButtonActionExecuteDelegate, UButtonUserWidget*, _button, const FButtonAction&, _action);
    DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FButtonActionEnabledDelegate, const UButtonUserWidget*, _button, const FButtonAction&, _action);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBindableNavigationDelegate, UButtonUserWidget*, _button, EUINavigation, _eNavigation);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBindableButtonUserWidgetInputActionDelegate, UButtonUserWidget*, _button, InputAction, _eInput);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBindableButtonUserWidgetDelegate, UButtonUserWidget*, _button, EFocusCause, _eCause);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FBindableButtonUserWidgetClickDelegate, UButtonUserWidget*, _button, bool, _bWithMouse);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonActionEnabledDelegate m_IsActionEnabledDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBindableButtonUserWidgetDelegate m_OnFocusReceived_Bindable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBindableButtonUserWidgetDelegate m_OnFocusLost_Bindable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBindableButtonUserWidgetClickDelegate m_OnClick_Bindable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBindableButtonUserWidgetInputActionDelegate m_OnInputActionPressed_Bindable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBindableNavigationDelegate m_OnNavigation_Bindable;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonUserWidgetDelegate m_OnFocusReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonUserWidgetDelegate m_OnFocusLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonUserWidgetClickDelegate m_OnClick;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonUserWidgetRightClickDelegate m_OnRightClick;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonUserWidgetInputActionDelegate m_OnInputActionPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonUserWidgetSelectedDelegate m_OnSelect;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonUserWidgetDeselectedDelegate m_OnDeselect;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonUserWidgetNavigationDelegate m_OnNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush m_DefaultStateBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush m_MouseOverStateBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush m_MouseDownStateBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush m_CurrentStateBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EButtonClickMethod::Type> m_eClickMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFocusOnVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCustomNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonAction m_Action1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonActionExecuteDelegate m_OnExecuteAction1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonAction m_Action2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonActionExecuteDelegate m_OnExecuteAction2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonAction m_Action3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonActionExecuteDelegate m_OnExecuteAction3;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsClickable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFocusOnMouseOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSelectOnClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSelectOnNavigationFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eSelectedVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eDeselectedVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eMouseOverVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eMouseOutVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPlayClickSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPlayRightClickSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bIsMouseOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bIsMouseDown;
    
public:
    UButtonUserWidget();

    UFUNCTION(BlueprintCallable)
    void BPF_SetSelected(bool _bSelected, bool _bForce);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsActionEnabled(const FButtonAction& _action) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetIsSelected();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRightClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnInputActionPressed(InputAction _eAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnDeselected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnClicked();
    
};

