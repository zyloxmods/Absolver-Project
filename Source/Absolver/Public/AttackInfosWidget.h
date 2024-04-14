#pragma once
#include "CoreMinimal.h"
#include "CombatDeckDetails.h"
#include "EStatsAppliedMode.h"
#include "EWeaponFamilies.h"
#include "SCUserWidget.h"
#include "AttackInfosWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UAttackInfosWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPreviewOnlyEquippedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatsAppliedMode m_eStatMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CompareAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsCompareDataValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_PreviewDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatDeckDetails m_CompareDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponFamilies m_eWeaponFamily;
    
    UAttackInfosWidget();

    UFUNCTION(BlueprintCallable)
    void BPF_SetAttack(FName _attack, bool _bIsMirror, FName _compareWith, bool _bIsCompareMirror, EWeaponFamilies _eWeaponFamily);
    
};

