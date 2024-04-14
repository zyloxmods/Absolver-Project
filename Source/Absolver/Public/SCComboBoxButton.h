#pragma once
#include "CoreMinimal.h"
#include "ButtonUserWidget.h"
#include "Templates/SubclassOf.h"
#include "SCComboBoxButton.generated.h"

class USCComboScrollList;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API USCComboBoxButton : public UButtonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iSelectedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> m_Items;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USCComboScrollList> m_ScrolllistClass;
    
public:
    USCComboBoxButton();

private:
    UFUNCTION(BlueprintCallable)
    void OnRightClick(UButtonUserWidget* _button, bool _bWithMouse);
    
    UFUNCTION(BlueprintCallable)
    void OnListClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnItemSelected(int32 _iIndex);
    
    UFUNCTION(BlueprintCallable)
    void Onclick(UButtonUserWidget* _button, bool _bWithMouse);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsOpened() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_InitList(TArray<FString> _items);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SelectionChanged();
    
};

