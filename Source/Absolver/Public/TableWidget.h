#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Components/SlateWrapperTypes.h"
#include "Components/VerticalBox.h"
#include "ButtonUserWidget.h"
#include "ButtonUserWidget.h"
#include "ECycleDirection.h"
#include "Templates/SubclassOf.h"
#include "TableWidget.generated.h"

class UButtonUserWidget;
class UHorizontalBox;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class UTableWidget : public UVerticalBox {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemSelectedDelegate, UButtonUserWidget*, _button, UButtonUserWidget*, _prevButton);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemRightClickDelegate, UButtonUserWidget*, _button, bool, _bWithMouse);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FItemNavigationDelegate, UButtonUserWidget*, _button, EUINavigation, _eNavigation, int32, _iItemIndex);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FItemDelegate_Bindable, UButtonUserWidget*, _button, EFocusCause, _eCause);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemDelegate, UButtonUserWidget*, _button, EFocusCause, _eCause);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemClickDelegate, UButtonUserWidget*, _button, bool, _bWithMouse);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCustomLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin m_LeftItemPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin m_RightItemPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin m_CenterItemsPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateChildSize m_ItemSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> m_ItemHorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> m_ItemVerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin m_RowPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateChildSize m_RowSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> m_RowHorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> m_RowVerticalAlignment;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemClickDelegate m_OnItemClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemRightClickDelegate m_OnItemRightClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDelegate m_OnItemFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDelegate m_OnItemLostFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSelectedDelegate m_OnItemSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemNavigationDelegate m_OnItemNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UButtonUserWidget::FBindableButtonUserWidgetClickDelegate m_OnItemClicked_Bindable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UButtonUserWidget::FBindableButtonUserWidgetDelegate m_OnItemFocused_Bindable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDelegate_Bindable m_OnItemLostFocus_Bindable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCustomNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iItemsPerRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHorizontalBox> m_RowWidgetClass;
    
public:
    UTableWidget();

    UFUNCTION(BlueprintCallable)
    void OnItemSelected(UButtonUserWidget* _button, UButtonUserWidget* _prevButton);
    
    UFUNCTION(BlueprintCallable)
    void OnItemRightClicked(UButtonUserWidget* _button, bool _bWithMouse);
    
    UFUNCTION(BlueprintCallable)
    void OnItemNavigation(UButtonUserWidget* _button, EUINavigation _eNavigation);
    
    UFUNCTION(BlueprintCallable)
    void OnItemLostFocus(UButtonUserWidget* _button, EFocusCause _eCause);
    
    UFUNCTION(BlueprintCallable)
    void OnItemFocused(UButtonUserWidget* _button, EFocusCause _eCause);
    
    UFUNCTION(BlueprintCallable)
    void OnItemClicked(UButtonUserWidget* _button, bool _bWithMouse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UButtonUserWidget* BPF_GetSelectedButton();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* BPF_GetNextItem(UWidget* currentButton, ECycleDirection _eDirection, bool _bSkipDisabled);
    
    UFUNCTION(BlueprintCallable)
    UWidget* BPF_GetLastVisibleItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetItemIndex(UWidget* _item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* BPF_GetItemAtIndex(int32 _iIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetChildrenCount();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddItem(UUserWidget* _widget);
    
};

