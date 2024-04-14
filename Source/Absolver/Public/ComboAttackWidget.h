#pragma once
#include "CoreMinimal.h"
#include "AttacksCombo.h"
#include "ButtonUserWidget.h"
#include "EQuadrantTypes.h"
#include "EWeaponFamilies.h"
#include "ComboAttackWidget.generated.h"

class USharedAttacksCombo;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ABSOLVER_API UComboAttackWidget : public UButtonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USharedAttacksCombo> m_SharedAttackCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eEditingQuadrant;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_QuadrantIcons[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_StanceIcons[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iComboAttackIndex;
    
public:
    UComboAttackWidget();

    UFUNCTION(BlueprintCallable)
    void BPF_SetWeaponFamily(EWeaponFamilies _eWeaponFamily);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetSharedCombo(USharedAttacksCombo* _combo);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetEditingQuadrant(EQuadrantTypes _eQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuadrantTypes BPF_MirrorQuadrantIfNeeded(EQuadrantTypes _eQuadrant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsMirror();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponFamilies BPF_GetWeaponFamily() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* BPF_GetStanceIcon(EQuadrantTypes _eQuadrant) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* BPF_GetQuadrantIcon(EQuadrantTypes _eQuadrant) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuadrantTypes BPF_GetEditingQuadrant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetCombo(FAttacksCombo& _combo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BPF_GetAttack();
    
};

