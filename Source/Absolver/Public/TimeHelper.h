#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TimeHelper.generated.h"

class UWorld;

UCLASS(Blueprintable)
class ABSOLVER_API UTimeHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTimeHelper();

    UFUNCTION(BlueprintCallable)
    static float GetDiffBetweenToDateTimeInSeconds(const FDateTime& _dateTimeA, const FDateTime& _dateTimeB);
    
    UFUNCTION(BlueprintCallable)
    static FDateTime GetCurrentSynchedTimeInDateTime(const UWorld* _world);
    
    UFUNCTION(BlueprintCallable)
    static FDateTime AddDelayToDateTime(const FDateTime& _dateTime, float _fDelayInSeconds);
    
};

