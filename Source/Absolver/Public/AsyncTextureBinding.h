#pragma once
#include "CoreMinimal.h"
#include "Binding/PropertyBinding.h"
#include "AsyncTextureStruct.h"
#include "AsyncTextureBinding.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UAsyncTextureBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UAsyncTextureBinding();

    UFUNCTION(BlueprintCallable)
    FAsyncTextureStruct GetValue() const;
    
};

