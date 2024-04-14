#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "AttackDataRow.h"
#include "EComboAttackValidationStates.h"
#include "EQuadrantTypes.h"
#include "SCUserWidget.h"
#include "AttackCard.generated.h"

class UComboEditor;
class UComboEditorData;
class UEditorCard;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UAttackCard : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_InterruptAttackPicto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eInterruptAttackVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_GuardBreakPicto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eGuardBreakVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eAvoidVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_AvoidText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_AvoidPicto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eParryVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_ParryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_ParryPicto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_AbsorbPicto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eAbsorbVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditorCard* m_Card;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UComboEditorData* m_ComboEditorData;
    
public:
    UAttackCard();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuadrantTypes GetStartQuadrant(int32 _iAttackIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UComboEditor* GetComboEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EComboAttackValidationStates BPF_ValidateComboAttack(int32 _iAttackIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAltAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetComboAttackIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetComboAttackData(int32 _iAttackIndex, bool& _out_bIsEmpty, FAttackDataRow& _out_dataRow, bool& _out_bIsMirror, bool& _out_bIsLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetComboAttackCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_UpdateBadEndQuadrant(bool _bBadQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUpdateParameters();
    
};

