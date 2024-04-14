#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPUserID.h"
#include "BPUserIDHelper.generated.h"

UCLASS(Blueprintable)
class ABSOLVER_API UBPUserIDHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPUserIDHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_Equal(const FBPUserID& _userID1, const FBPUserID& _userID2);
    
};

