#pragma once
#include "CoreMinimal.h"
#include "CombatStyleComboDB.generated.h"

class UAttacksComboDB;

USTRUCT(BlueprintType)
struct FCombatStyleComboDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttacksComboDB* m_AnimComboDB[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiCombatStyle;
    
    ABSOLVER_API FCombatStyleComboDB();
};

