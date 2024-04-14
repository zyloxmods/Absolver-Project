#pragma once
#include "CoreMinimal.h"
#include "CharacterStatsBindings.h"
#include "CombatDeckDetails.h"
#include "EStatsAppliedMode.h"
#include "EWeaponFamilies.h"
#include "MenuWidget.h"
#include "CharacterMenu.generated.h"

class UCombatDeckButton;
class UFightingStyleButton;
class UPanelWidget;
class UTableWidget;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UCharacterMenu : public UMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_CurrentDeckDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_PreviewDeckDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterStatsBindings m_CurrentCharacterStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterStatsBindings m_PreviewCharacterStats;
    
public:
    UCharacterMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void OnStatsUpdated(EStatsAppliedMode _eStatsAppliedMode);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PreviewComboSlot(EWeaponFamilies _eWeaponFamily, int32 _iSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFightingStyleButton* BPF_GetFightingStyleButtonInTable(UTableWidget* _table, int32 _iFightingStyleID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCombatDeckButton* BPF_GetCombatDeckButtonInPanel(UPanelWidget* _panel, EWeaponFamilies _eWeaponFamily, int32 _iSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_EquipEmote(const FName& _emoteName, const uint8 _uiEmoteSlotIndex);
    
};

