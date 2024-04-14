#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HittableActor.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class ABSOLVER_API UHittableActor : public UInterface {
    GENERATED_BODY()
};

class ABSOLVER_API IHittableActor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeHitted(AActor* _instigator);
    
};

