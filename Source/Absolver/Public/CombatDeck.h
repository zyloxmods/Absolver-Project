#pragma once
#include "CoreMinimal.h"
#include "CombatDeckDetails.h"
#include "ComboSave.h"
#include "EWeaponFamilies.h"
#include "MenuWidget.h"
#include "Templates/SubclassOf.h"
#include "CombatDeck.generated.h"

class UBaseWeaponData;
class UCombatDeckFamilyWidget;
class UCombatDeckSlotWidget;
class UDummiesDB;
class UPanelWidget;
class UTexture2D;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UCombatDeck : public UMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_OpeningCombatDeckDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_CombatDeckDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_PreviewCombatDeckDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseWeaponData* m_OpeningEquippedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOpeningWithWeaponDrawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDummiesDB* m_DummiesDB;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCombatDeckSlotWidget> m_SaveSlotClass;
    
public:
    UCombatDeck();

    UFUNCTION(BlueprintCallable)
    void BPF_UpdateDeckDetailsFromCurrentSlot();
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateDeckDetailsFromCurrentFamily();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCurrentWeaponFamily(EWeaponFamilies family, UTexture2D* icon);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCurrentSlot(FComboSave _slot);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetCanExitMenu(bool _bCanExitMenu);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetActiveSlot(EWeaponFamilies _eFamily, FName _slotName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RenameComboSlot(EWeaponFamilies _eFamily, FName _fromName, FName _toName, UCombatDeckSlotWidget* _slot);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PasteSlotFromClipboard(UPanelWidget* _slotPanel, FName _name, EWeaponFamilies _eFamily);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LaunchComboEditorOpening();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsClipboardEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsClipboardCompatibleWithFamily(EWeaponFamilies _eFamily);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCombatDeckSlotWidget* BPF_GetSlotWidgetBySlotName(UPanelWidget* _panelWidget, const FName _slotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponFamilies BPF_GetCurrentWeaponFamily() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FComboSave BPF_GetCurrentSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetClipboardInfos(EWeaponFamilies& _eOutFamily, FComboSave& _outSlot, bool& _bOutIsFilled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BPF_GetActiveSlotName(const EWeaponFamilies _eFamily) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_FindSlotByName(FName _name, EWeaponFamilies _eFamily, FComboSave& _out_slot);
    
    UFUNCTION(BlueprintCallable)
    UCombatDeckFamilyWidget* BPF_FindFamilyWidgetByFamily(UVerticalBox* _verticalBox, EWeaponFamilies _eFamily);
    
    UFUNCTION(BlueprintCallable)
    void BPF_FillComboSlotPanel(UPanelWidget* _panelWidget);
    
    UFUNCTION(BlueprintCallable)
    void BPF_EmptyClipboard(FComboSave _destination);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CopySlotToClipboard(EWeaponFamilies _eFamily, FComboSave _slot);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_ComboAlreadyExist(FName _comboName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSlotWidgetFocusReceived(UCombatDeckSlotWidget* _widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSlotWidgetFocusLost(UCombatDeckSlotWidget* _widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSlotWidgetClicked(UCombatDeckSlotWidget* _widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSlotNameEditionValidated(UCombatDeckSlotWidget* _widget, const FText& _name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSlotNameEditionValidate(UCombatDeckSlotWidget* _widget, const FText& _name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnSlotNameEditionCanceled(UCombatDeckSlotWidget* _widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnOpenMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnEditorClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnCloseMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnBackButtonPressed();
    
};

