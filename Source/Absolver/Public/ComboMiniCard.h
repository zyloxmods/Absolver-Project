#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "AttackDataRow.h"
#include "EQuadrantTypes.h"
#include "EditorPreviewWidget.h"
#include "ComboMiniCard.generated.h"

class UComboEditorData;
class UComboWidgetData;
class UCurveFloat;
class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UComboMiniCard : public UEditorPreviewWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eWarningVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eInterruptAttackVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eGuardBreakVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eAvoidVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* m_AvoidPicto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eParryVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* m_ParryPicto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eAbsorbVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eNoSpecialVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UComboWidgetData* m_ComboWidgetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UComboEditorData* m_ComboEditorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iQuadrantThrough;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fAttackPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_AttackPicto;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_FillingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShowAttackPicto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShowSpecialProperty;
    
public:
    UComboMiniCard();

private:
    UFUNCTION(BlueprintCallable)
    void LoadAttackPicto();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateParameters(const FAttackDataRow& _AttackData, bool _bMirror);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetComboWidgetData(UComboWidgetData* _data);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetAttackInProgress(bool _bInProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuadrantTypes BPF_GetAssignedQuadrant(const FAttackDataRow& _AttackData);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CollapseAllAttackPropertiesImages();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUpdateParameters(const FAttackDataRow& _AttackData, bool _bMirror);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ManageError(bool _bError);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_InitSpecialPictos(UTexture2D* _interruptTexture, UTexture2D* _guardBreakTexture, UTexture2D* _absorbTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ForceActualiseBackground(bool _bHighlight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ForceActualiseAlreadyUsed(bool _bAlreadyUsed);
    
};

