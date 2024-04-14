#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MaterialIndexConverter.generated.h"

class USaveThePlaines;

UCLASS(Blueprintable)
class UMaterialIndexConverter : public UObject {
    GENERATED_BODY()
public:
    UMaterialIndexConverter();

    UFUNCTION(BlueprintCallable)
    static void Reset();
    
    UFUNCTION(BlueprintCallable)
    static void Init();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyModifications(USaveThePlaines* _save);
    
};

