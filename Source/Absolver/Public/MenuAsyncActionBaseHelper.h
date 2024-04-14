#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MenuAsyncActionBaseHelper.generated.h"

class UMenuAsyncActionBase;

UCLASS(Blueprintable)
class ABSOLVER_API UMenuAsyncActionBaseHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMenuAsyncActionBaseHelper();

    UFUNCTION(BlueprintCallable)
    static void BPF_CancelAsyncAction(UMenuAsyncActionBase* _action);
    
};

