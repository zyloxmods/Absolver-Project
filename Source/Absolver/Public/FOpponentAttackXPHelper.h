#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPendingttackXPType.h"
#include "PendingAttackXP.h"
#include "FOpponentAttackXPHelper.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UFOpponentAttackXPHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFOpponentAttackXPHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetXPValueByType(const FPendingAttackXP& _XP, EPendingttackXPType _eType);
    
};

