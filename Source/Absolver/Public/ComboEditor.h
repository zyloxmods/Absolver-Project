#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Components/SlateWrapperTypes.h"
#include "CombatDeckDetails.h"
#include "EAttackSortingMethods.h"
#include "EComboEditorState.h"
#include "EQuadrantTypes.h"
#include "EWeaponFamilies.h"
#include "MenuWidget.h"
#include "RefreshAttackNbTintStruct.h"
#include "Templates/SubclassOf.h"
#include "ComboEditor.generated.h"

class UAttackCard;
class UComboEditorData;
class UComboScrollItem;
class UEditorCard;
class UEditorQuadrantWidget;
class UHUDWidget;
class UScrollBox;
class UTexture2D;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UComboEditor : public UMenuWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComboEditorStateChanged, EComboEditorState, _eNewState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComboEditorStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eRemoveNextAttackTextVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScrollBox* m_ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAttackCard* m_AttackDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* m_ValidationWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHUDWidget* m_MiniMoveset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_eRemoveCurrentAttackTextVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UComboEditorData* m_ComboEditorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_CombatDeckDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_WeaponDeckDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_PreviewCombatDeckDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_PreviewWeaponDeckDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEditorQuadrantWidget* m_QuadrantDisplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText m_FLNbAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText m_FRNbAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText m_BRNbAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText m_BLNbAttacks;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UComboScrollItem*> m_ScrollButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_DefaultTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UComboScrollItem> m_ScrollWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShowEmptyComboNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackSortingMethods m_eScrollBoxSortingMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin m_ScrollBoxPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin m_ScrollBoxHBoxPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiMaxChildrenNumberInScrollBoxHBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> m_ScrollWidgetLine;
    
public:
    UComboEditor();

    UFUNCTION(BlueprintCallable)
    void SortScrollBox(EAttackSortingMethods _sortingType);
    
    UFUNCTION(BlueprintCallable)
    void ShowScrollListWithFocusedCard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetWantedQuadrant(EQuadrantTypes _eWantedQuadrant) const;
    
    UFUNCTION(BlueprintCallable)
    void RemoveSelectedAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnOpenStanceEdition();
    
    UFUNCTION(BlueprintCallable)
    EQuadrantTypes GetWantedQuadrant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuadrantTypes GetQuadrantFocused();
    
    UFUNCTION()
    void GetCurrentQuadrantAndFocusedCardIndex(EQuadrantTypes& _eOutCurrentQuad, int8& _iOutCardIndex);
    
    UFUNCTION(BlueprintCallable)
    EQuadrantTypes GetCurrentQuadrant() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseComboScroll(UEditorCard* _card);
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeAndRefreshQuadrant();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_UpdatePreviewCombo(EQuadrantTypes _eWantedQuadrant, int32 _iAttackIndex, const FName& _previewAttack);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetWeaponFamily(EWeaponFamilies _eWeaponFamily);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetState(EComboEditorState _eState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetPreviewCombo();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetFocusOnCard(UEditorCard* _card);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RequestTraining();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RequestStanceEdition();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RequestCancel();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveNextAttack();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_RefreshMiniMoveset();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_OnCloseAttackReplacement();
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnClose();
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsFocusedCardAttackSet();
    
    UFUNCTION(BlueprintCallable)
    void BPF_InitMoveSetTutorialWithList(const TArray<UWidget*>& _widgetList);
    
    UFUNCTION(BlueprintCallable)
    void BPF_InitMoveSetTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponFamilies BPF_GetWeaponFamily();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EComboEditorState BPF_GetState();
    
    UFUNCTION(BlueprintCallable)
    UEditorCard* BPF_GetFocusedCard();
    
    UFUNCTION(BlueprintCallable)
    void BPF_FindAndSetFocusedCard();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_ExitStanceEdition();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_ChosenAttackValidation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_WrongCardSelected(UEditorCard* _wronglySelectedCard, UEditorCard* _WantedCard);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_TutorialEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_TryQuitBadCombo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_StartTraining();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ShowValidationWindow(bool _bAlreadyUsed, bool _bBadEndQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ShowScrollList(uint8 _uiAttackIndex, EQuadrantTypes _eAttackStartQuad);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RefreshAttackNumberTint(const TArray<FRefreshAttackNbTintStruct>& _params);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnStateChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnRemove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnExitStanceEdition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEnterStanceEdition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAttackListItemFocused(UComboScrollItem* _attackItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_NextTutorialStep(uint8 _uiStepNumber, uint8 _uiTotalStepNumber, UEditorCard* _nextCard);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ForceFocusedTintOnCard(UEditorCard* _card);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_FocusChanged(UEditorCard* _newCard, bool _bMirror);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_CloseComboScroll(UEditorCard* _card);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_CloseAttackReplacement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ChangeNewAttacksVisibility(ESlateVisibility _eVisibility);
    
};

