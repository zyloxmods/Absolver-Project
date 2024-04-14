#pragma once
#include "CoreMinimal.h"
#include "Bool.h"
#include "SCAnimNotifyState.h"
#include "TransitionCanInterruptNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ABSOLVER_API UTransitionCanInterruptNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBool m_TransitionAllowance[38];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_BaseName;
    
    UTransitionCanInterruptNotifyState();

};

