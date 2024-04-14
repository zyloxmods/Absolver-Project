#pragma once
#include "CoreMinimal.h"
#include "AvoidPropertyContainer.h"
#include "EAvoidType.h"
#include "SCAnimNotifyState.h"
#include "AvoidWindowNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ABSOLVER_API UAvoidWindowNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAvoidType> m_AvoidTypeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvoidPropertyContainer m_AvoidPropertyContainer;
    
public:
    UAvoidWindowNotifyState();

};

