#pragma once
#include "CoreMinimal.h"
#include "ButtonUserWidget.h"
#include "EStatsAppliedMode.h"
#include "EWeaponFamilies.h"
#include "CombatDeckButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UCombatDeckButton : public UButtonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponFamilies m_eWeaponFamily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSlotIndex;
    
public:
    UCombatDeckButton();

protected:
    UFUNCTION(BlueprintCallable)
    void OnStatsChanged(EStatsAppliedMode _eStatsMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetWeaponFamily(EWeaponFamilies _eFamily);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSlotIndex(int32 _iSlotIndex);
    
};

