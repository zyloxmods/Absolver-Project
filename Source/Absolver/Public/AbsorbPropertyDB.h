#pragma once
#include "CoreMinimal.h"
#include "EAbsorbFeedbackTypes.h"
#include "SpecialAbilityPropertyDB.h"
#include "AbsorbPropertyDB.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UAbsorbPropertyDB : public USpecialAbilityPropertyDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiAbsorbStackNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAbsorbIsDeathDodger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iAbsorbFreezeframeNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bResistsInterruptAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bResistsGuardBreakAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFromSpecialAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbsorbFeedbackTypes m_eAbsorbFeedbackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGhostDamageActivated;
    
    UAbsorbPropertyDB();

};

