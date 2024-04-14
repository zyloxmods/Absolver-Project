#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractiveInterface.generated.h"

class APawn;

UINTERFACE(Blueprintable)
class ABSOLVER_API UInteractiveInterface : public UInterface {
    GENERATED_BODY()
};

class ABSOLVER_API IInteractiveInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanInteract(APawn* _instigator);
    
};

