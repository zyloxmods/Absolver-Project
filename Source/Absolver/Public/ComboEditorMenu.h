#pragma once
#include "CoreMinimal.h"
#include "CombatDeckDetails.h"
#include "EComboEditorState.h"
#include "ECycleDirection.h"
#include "EQuadrantTypes.h"
#include "EStatsAppliedMode.h"
#include "EWeaponFamilies.h"
#include "MenuWidget.h"
#include "ComboEditorMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UComboEditorMenu : public UMenuWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponChanged, EWeaponFamilies, _weapon);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FComboEditorStateChanged, EComboEditorState, _ePrevState, EComboEditorState, _eNewState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComboEditorStateChanged OnStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComboEditorState m_eState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_CurrentDeckDetails;
    
public:
    UComboEditorMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void OnStatsChanged(EStatsAppliedMode _eStatsMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_StopPreview();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetWeaponFamily(EWeaponFamilies _eWeaponFamily);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetState(EComboEditorState _eState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetEditingQuadrant(EQuadrantTypes _eQuadrant);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetComboForEditingWeaponFamily();
    
    UFUNCTION(BlueprintCallable)
    void BPF_PreviewCombo(int32 iAltIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PreviewAttack(FName _attack, bool _bMirror, float _fStartTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponFamilies BPF_GetWeaponFamily();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EComboEditorState BPF_GetState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuadrantTypes BPF_GetEditingQuadrant();
    
    UFUNCTION(BlueprintCallable)
    void BPF_BackupComboForEditingWeaponFamily();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_WeaponFamilyChanged(EWeaponFamilies _eWeaponFamily);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SetNextWeapon(ECycleDirection _direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnTrainingRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnToggleOverviewPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnStateChanged(EComboEditorState _ePrevState, EComboEditorState _eNewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEditingQuadrantChanged(EQuadrantTypes _eQuadrant);
    
};

