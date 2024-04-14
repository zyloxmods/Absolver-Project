#pragma once
#include "CoreMinimal.h"
#include "EQuadrantTypes.h"
#include "EWeaponFamilies.h"
#include "Templates/SubclassOf.h"
#include "SpecialAttackStruct.generated.h"

class USpecialAttackUseCondition;

USTRUCT(BlueprintType)
struct FSpecialAttackStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SpecialAttackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpecialAttackUseCondition> m_SpecialAttackUseCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponFamilies m_eWeaponFamily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSetAttackCooldownAfterUse;
    
    ABSOLVER_API FSpecialAttackStruct();
};

