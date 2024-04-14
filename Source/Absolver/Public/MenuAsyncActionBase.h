#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMenuEnum.h"
#include "MenuAsyncActionBase.generated.h"

UCLASS(Blueprintable)
class UMenuAsyncActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UMenuAsyncActionBase();

private:
    UFUNCTION(BlueprintCallable)
    void OnCurrentMenuChanged(EMenuEnum _ePrevMenu, EMenuEnum _eNewMenu);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_Cancel();
    
};

