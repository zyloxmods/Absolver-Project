#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAttackOrigin.h"
#include "EAttackTarget.h"
#include "EParryHeight.h"
#include "EParrySide.h"
#include "ParryMatch.generated.h"

UCLASS(Abstract, Blueprintable)
class ABSOLVER_API UParryMatch : public UObject {
    GENERATED_BODY()
public:
    UParryMatch();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPE_DoesParrySideMatch(EParrySide _eParrySide, EAttackTarget _eAttackTarget, EAttackOrigin _eAttackOrigin) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPE_DoesParryHeightMatch(EParryHeight _eParryHeight, EAttackTarget _eAttackTarget, EAttackOrigin _eAttackOrigin) const;
    
};

