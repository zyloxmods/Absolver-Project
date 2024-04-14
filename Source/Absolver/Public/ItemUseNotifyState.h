#pragma once
#include "CoreMinimal.h"
#include "EItemUseState.h"
#include "SCAnimNotifyState.h"
#include "ItemUseNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ABSOLVER_API UItemUseNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemUseState m_eItemUseState;
    
public:
    UItemUseNotifyState();

};

