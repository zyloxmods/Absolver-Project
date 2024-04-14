#pragma once
#include "CoreMinimal.h"
#include "EItemUseState.h"
#include "SCAnimNotify.h"
#include "ItemUseNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ABSOLVER_API UItemUseNotify : public USCAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemUseState m_eItemUseState;
    
public:
    UItemUseNotify();

};

