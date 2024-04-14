#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Styling/SlateColor.h"
#include "CharacterOverviewWeaponFamilyInfos.h"
#include "CharacterStats.h"
#include "CombatDeckDetails.h"
#include "EBonusType.h"
#include "EEquipmentSlot.h"
#include "EEquipmentStatType.h"
#include "EStatsAppliedMode.h"
#include "EStatsWeaponComputingMethod.h"
#include "EWeaponFamilies.h"
#include "MenuBasicStatsStruct.h"
#include "SCUserWidget.h"
#include "CharacterOverview.generated.h"

class AActor;
class UDistributionStatWidget;
class UFightingStyleDB;
class UPreviewData;
class UStatsComponent;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UCharacterOverview : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterOverviewWeaponFamilyInfos> m_WeaponFamilyInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fAverageHandWR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fPreviewAverageHandWR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fAverageWeaponWR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fPreviewAverageWeaponWR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fAverageNormalHandsDmg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fAverageSpecialHandsDmg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fAverageNormalWeaponDmg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fAverageSpecialWeaponDmg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fPreviewAverageNormalHandsDmg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fPreviewAverageSpecialHandsDmg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fPreviewAverageNormalWeaponDmg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fPreviewAverageSpecialWeaponDmg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_CurrentWeaponCombatDeckDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_PreviewWeaponCombatDeckDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_CurrentHandCombatDeckDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_PreviewHandCombatDeckDetails;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewData* m_PreviewData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStatComparisionMarginValue;
    
public:
    UCharacterOverview();

private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterEndPlayCallBack(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetDistributionsStatWidget(UDistributionStatWidget* _charaWidget);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RefreshEquipmentStatsTexts(EEquipmentSlot _eSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetWeightRatioStatPreviewColor(EEquipmentStatType _eEquipmentStatType, bool _bHigherIsBetter, EStatsWeaponComputingMethod _eStatsComputingMethod) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetWeightRatio(EStatsAppliedMode _eStatsAppliedMode, EStatsWeaponComputingMethod _eStatsComputingMethod) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponFamilies BPF_GetWeaponFamilyFromStatsAppliedMode(const EStatsAppliedMode _eStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetWeaponDeckDetailsFromStatsAppliedMode(const EStatsAppliedMode _eStatsAppliedMode, FCombatDeckDetails& _outDetails);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetUIInfosForWeaponFamily(EWeaponFamilies _weaponFamily, FCharacterOverviewWeaponFamilyInfos& _outFamilyInfos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStatsComponent* BPF_GetStatsComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetSingleEquipmentStatPreviewColor(EEquipmentStatType _eEquipmentStatType, EEquipmentSlot _eEquipmentSlot, bool _bHigherIsBetter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPreviewData* BPF_GetPreviewData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetHandDeckDetailsFromStatsAppliedMode(const EStatsAppliedMode _eStatsAppliedMode, FCombatDeckDetails& _outDetails);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetEquipmentStat(EEquipmentStatType _eEquipmentStatType, EEquipmentSlot _eEquipmentSlot, EStatsAppliedMode _eStatsAppliedMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText BPF_GetDescription(EEquipmentSlot _eEquipmentSlot, EStatsAppliedMode _eStatsAppliedMode, int32 _iItemIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCurrentFightingStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetColorFromStatComparison(float _fCurrentStat, float _fPreviewStat, bool _bHigherIsBetter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetCharacterStatsReference(FCharacterStats& _struct, EStatsAppliedMode _eMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetBasicStatsStruct(FMenuBasicStatsStruct& _struct, EStatsAppliedMode _eMode) const;
    
    UFUNCTION(BlueprintCallable)
    FSlateColor BPF_GetBasicStatPreviewColor(EBonusType _eType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor BPF_GetAllEquipmentStatPreviewColor(EEquipmentStatType _eEquipmentStatType, bool _bHigherIsBetter, bool _bCountWeapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetAllEquipmentStat(EEquipmentStatType _eEquipmentStatType, EStatsAppliedMode _eStatsAppliedMode, bool _bPreventWeaponCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RefreshFightingStyle(UFightingStyleDB* _fightingStyleDB);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RefreshEquipmentStatTexts(EEquipmentStatType _eStat, int32 _iStatPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RefreshCharaName(const FText& _charaName);
    
};

