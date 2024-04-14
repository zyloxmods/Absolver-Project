#pragma once
#include "CoreMinimal.h"
#include "ButtonUserWidget.h"
#include "EQuadrantTypes.h"
#include "EWeaponFamilies.h"
#include "AttackButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UAttackButton : public UButtonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eCurrentQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponFamilies m_eCurrentWeaponFamily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCurrentComboIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CurrentAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsMirror;
    
public:
    UAttackButton();

    UFUNCTION(BlueprintCallable)
    void BPF_SetAttackData(const FName& _attack, EQuadrantTypes _eQuadrant, EWeaponFamilies _eCurrentWeaponFamily, int32 _iCurrentComboIndex, FName _currentAttackName, bool _bIsMirror);
    
};

