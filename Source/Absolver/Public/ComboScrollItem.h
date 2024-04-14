#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "AttackDataRow.h"
#include "EQuadrantTypes.h"
#include "SCUserWidget.h"
#include "ComboScrollItem.generated.h"

class UComboScrollItem;
class UEditorCard;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UComboScrollItem : public USCUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonEvents, UComboScrollItem*, _item);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonEvents OnFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonEvents OnClicked;
    
    UComboScrollItem();

    UFUNCTION(BlueprintCallable)
    void BPF_OnScrollBoxButtonUnFocused();
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnScrollBoxButtonFocused();
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnButtonClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsCurrentAttack();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsAttackAlreadyUsed();
    
    UFUNCTION(BlueprintCallable)
    EQuadrantTypes BPF_GetRealQuadrant(EQuadrantTypes _eQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEditorCard* BPF_GetCard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BPF_GetAttackName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetAttackData(FAttackDataRow& _AttackData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SetHoveredBackground();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnFocusLost();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_IsButtonFocused();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_InitButton(const FAttackDataRow& _AttackData, bool _bIsButtonAttackMirror, bool _bAttackHasBadEndQuadrant, bool _bAttackAlreadyUsed, EQuadrantTypes _eAlreadyUsedQuadrant);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_HideBadEndQuad();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ChangeNewAttackVisibility(ESlateVisibility _eVisibility);
    
};

