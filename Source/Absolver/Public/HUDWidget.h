#pragma once
#include "CoreMinimal.h"
#include "EQuadrantTypes.h"
#include "SCUserWidget.h"
#include "HUDWidget.generated.h"

class UComboWidget;
class UComboWidgetData;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UHUDWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UComboWidget*> m_MiniMovesetQuadrants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eCurrentQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UComboWidgetData* m_MiniMovesetData;
    
    UHUDWidget();

    UFUNCTION(BlueprintCallable)
    void OnRegularAttack(EQuadrantTypes _eStartQuadrant, EQuadrantTypes _eEndQuadrant, uint8 _uiNewIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnComboEnd(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintCallable)
    void OnComboChangeQuadrant(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintCallable)
    void OnComboChangeNextImg(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeQuadrantState(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintCallable)
    void OnAltAttack(EQuadrantTypes _eNewQuadrant, uint8 _uiCurrentComboIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RebuildAllQuadrants();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAttacking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ResetFillingsFromQuadrant(EQuadrantTypes _eQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RegularAttack(EQuadrantTypes _eAttackStartQuadrant, EQuadrantTypes _eAttackEndQuadrant, uint8 _uiAttackIndex, bool _bFromEditor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RefreshQuadrantError(EQuadrantTypes _eQuadrant, bool _bError);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRebuild();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ComboStart(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ComboEnds(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ChangeQuadrant(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_AttackEndsInOtherQuadrant(EQuadrantTypes _eNewQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_AlternativeAttack(EQuadrantTypes _eAttackStartQuadrant, EQuadrantTypes _eAttackEndQuadrant, bool _bFromEditor);
    
};

