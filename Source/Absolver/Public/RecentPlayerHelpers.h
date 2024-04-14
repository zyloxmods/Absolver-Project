#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RecentPlayerInfos.h"
#include "RecentPlayerHelpers.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API URecentPlayerHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URecentPlayerHelpers();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsInSchool(const FRecentPlayerInfos& _recentPlayer);
    
};

