#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "EFactionsEnums.h"
#include "TargetableActor.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class ABSOLVER_API UTargetableActor : public UInterface {
    GENERATED_BODY()
};

class ABSOLVER_API ITargetableActor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsValidTarget(AActor* _targeter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetTargettedPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EFactionsEnums GetFaction();
    
};

