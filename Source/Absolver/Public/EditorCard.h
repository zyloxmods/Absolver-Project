#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "AttackDataRow.h"
#include "CombatDeckDetails.h"
#include "EAvoidType.h"
#include "EParrySide.h"
#include "EQuadrantTypes.h"
#include "EStatsAppliedMode.h"
#include "SCUserWidget.h"
#include "EditorCard.generated.h"

class UComboEditor;
class UComboEditorData;
class USCButton;
class UTexture2D;
class UTimelineButton;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UEditorCard : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineButton* m_TimelineButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UComboEditorData* m_ComboEditorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_ArrowPictoInitialScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDamageGaugePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpeedGaugePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRangeGaugePercentage;
    
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
    ESlateVisibility m_eNoPropertyVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText m_AltAttackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDamageComparisonPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpeedComparisonPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRangeComparisonPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAvoidType m_uiAvoidType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParrySide m_uiParrySide;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UComboEditor> m_ComboEditor;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_StanceTextures[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_QuadrantTextures[4];
    
public:
    UEditorCard();

    UFUNCTION(BlueprintCallable)
    void OnButtonUnFocused(USCButton* _button);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonFocused(USCButton* _button);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateDeckStructFromAttack(const FAttackDataRow& _AttackData, bool _bIsAttackMirror, const EStatsAppliedMode _eStatsMode);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetAttackFromName(FName _AttackName, bool _bIsMirror);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsCardError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAttackSet() const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* BPF_GetStanceTexture(EQuadrantTypes _eQuadrant);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* BPF_GetQuadrantTexture(EQuadrantTypes _eQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuadrantTypes BPF_GetQuadrant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetPreviewAttackData(FAttackDataRow& _dataRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText BPF_GetFightingStyleName(int32 _iStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetDeckStructForStatsMode(const EStatsAppliedMode _eStatsMode, FCombatDeckDetails& _outDeckDetails) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetCurrentAttackData(FAttackDataRow& _outAttackData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCardIndex() const;
    
    UFUNCTION(BlueprintCallable)
    EQuadrantTypes BPF_GetAttackStartQuadrant(bool _bMirror);
    
    UFUNCTION(BlueprintCallable)
    EQuadrantTypes BPF_GetAttackEndQuadrant(bool _bMirror);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ShowEmptyButtonAtEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RefreshStatsComparison(int32 _iDamageComparison, int32 _iSpeedComparison, int32 _iRangeComparison);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RefreshLockedButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RefreshInputPicto(bool _bAlternative);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RefreshHideButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RefreshErrorButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RefreshAttack(const FAttackDataRow& _AttackData, bool _bMirror, EQuadrantTypes _eRealStartQuadrant, EQuadrantTypes _eRealEndQuadrant, bool _bIsFollowedByHole, bool _bIsLastActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Refresh(bool bHasFocus, bool _bError, bool _bToHighlight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_IsCardFocusable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_InitFirstRegCard();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_InitAltCard();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_HideStatsComparison();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_HideAllSpecialPicto();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ForceRefreshStartQuad(EQuadrantTypes _eQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ForceDisplayCard();
    
};

