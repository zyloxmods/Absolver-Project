#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ProceduralLevelStreamingHelper.generated.h"

UCLASS(Blueprintable)
class UProceduralLevelStreamingHelper : public UObject {
    GENERATED_BODY()
public:
    UProceduralLevelStreamingHelper();

    UFUNCTION(BlueprintCallable)
    void OnLevelShown();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelHidden();
    
};

