#pragma once
#include "CoreMinimal.h"
#include "ParryType.h"
#include "SCAnimNotifyState.h"
#include "ParryWindowNotifyState.generated.h"

class UParryPropertyDB;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ABSOLVER_API UParryWindowNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParryType> m_ParryTypeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParryPropertyDB* m_ParryPropertyDB;
    
public:
    UParryWindowNotifyState();

};

