#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
#include "AbsorbWindowNotifyState.generated.h"

class UAbsorbPropertyDB;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ABSOLVER_API UAbsorbWindowNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbsorbPropertyDB* m_AbsorbPropertyDB;
    
public:
    UAbsorbWindowNotifyState();

};

