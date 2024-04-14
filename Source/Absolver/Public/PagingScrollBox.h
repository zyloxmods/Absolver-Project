#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Components/ScrollBox.h"
#include "TableWidget.h"
#include "TableWidget.h"
#include "TableWidget.h"
#include "TableWidget.h"
#include "Templates/SubclassOf.h"
#include "PagingScrollBox.generated.h"

class UButtonUserWidget;
class USCUserWidget;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class UPagingScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemVisibleDelegate, int32, _iDataIndex, UUserWidget*, _cell);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FItemPreviewButtonPressed);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTableWidget::FItemClickDelegate m_OnItemClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTableWidget::FItemRightClickDelegate m_OnItemRightClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTableWidget::FItemDelegate m_OnItemFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTableWidget::FItemDelegate m_OnItemLostFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTableWidget::FItemSelectedDelegate m_OnItemSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemVisibleDelegate m_OnItemVisible;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemPreviewButtonPressed m_ItemPreviewButtonPressed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLoadedRowCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USCUserWidget> m_CellClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> m_Headers;
    
public:
    UPagingScrollBox();

protected:
    UFUNCTION(BlueprintCallable)
    void OnItemSelected(UButtonUserWidget* _button, UButtonUserWidget* _prevButton);
    
    UFUNCTION(BlueprintCallable)
    void OnItemRightClicked(UButtonUserWidget* _button, bool _bWithMouse);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnItemPreviewButtonPressedCallback();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnItemLostFocus(UButtonUserWidget* _button, EFocusCause _eCause);
    
    UFUNCTION(BlueprintCallable)
    void OnItemFocused(UButtonUserWidget* _button, EFocusCause _eCause);
    
    UFUNCTION(BlueprintCallable)
    void OnItemClicked(UButtonUserWidget* _button, bool _bWithMouse);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* BPF_GetWidgetFromSectionDataIndex(int32 _iSection, int32 _iDataIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* BPF_GetWidgetFromDataIndex(int32 _iIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetWidgetDataIndex(const int32 iRow, const int32 iCol) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetRowDataIndex(const int32 iRow) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* BPF_GetLastVisibleWidgetFromSection(int32 _iSection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* BPF_GetLastVisibleCell();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetItemCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetDataIndexFromWidget(UUserWidget* _widget);
    
};

