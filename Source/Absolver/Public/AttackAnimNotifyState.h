#pragma once
#include "CoreMinimal.h"
#include "EAttackStates.h"
#include "SCAnimNotifyState.h"
#include "AttackAnimNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ABSOLVER_API UAttackAnimNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackStates m_eAttackState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiHitNumber;
    
    UAttackAnimNotifyState();

};

