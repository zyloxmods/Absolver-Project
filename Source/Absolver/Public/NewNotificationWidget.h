#pragma once
#include "CoreMinimal.h"
#include "EAttackLearningState.h"
#include "EButtonNotificationType.h"
#include "ECharacterProgressionRewardTypes.h"
#include "EStatsAppliedMode.h"
#include "EWeaponFamilies.h"
#include "InventorySearchFilter.h"
#include "SCUserWidget.h"
#include "School.h"
#include "NewNotificationWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UNewNotificationWidget : public USCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponFamilies m_eAttacksWeaponFamily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackLearningState m_eAttackLearningState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventorySearchFilter m_InventoryItemFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECharacterProgressionRewardTypes> m_eProgressionRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOnSchoolHasPendingUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOnEndSeasonSummary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAlwaysVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_displayedText;
    
public:
    UNewNotificationWidget();

    UFUNCTION(BlueprintCallable)
    void OnStatsChanged(EStatsAppliedMode _eStatAppliedMode);
    
    UFUNCTION(BlueprintCallable)
    void OnSchoolHasPendingUpdate(const FSchool& _school);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetNotifyProgressionRewards(const TArray<ECharacterProgressionRewardTypes>& _rewards);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetNotifyNewSparePoints(bool _bNewSparePoints);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetNotifyNewAttacksForFamily(EWeaponFamilies _eWeaponFamily);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetNotifyNewAttacks(bool _bNotify);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Initialize(const TArray<ECharacterProgressionRewardTypes>& _rewards, const FInventorySearchFilter& _inventoryFilter, const TArray<EButtonNotificationType>& _notifications, EWeaponFamilies _eWeaponFamily, bool _bOnSchoolHasPendingUpdate, bool _bOnEndSeasonSummary);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Init(TArray<ECharacterProgressionRewardTypes> _rewards, FInventorySearchFilter _inventoryFilter, bool _bNewSparePoints, EWeaponFamilies _eWeaponFamily, bool _bNewAttacks, bool _bNewInventoryItems, bool _bNewLootBox, bool _bNewEmotes, bool _bNewIntros, bool _bOnSchoolHasPendingUpdate, bool _bOnEndSeasonSummary);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_Show();
    
};

