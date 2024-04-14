#pragma once
#include "CoreMinimal.h"

#include "BPUniqueNetId.h"
#include "BlueprintGetRecentPlayersDelegateDelegate.h"
#include "GetRecentPlayersCallbackProxy.generated.h"

class UGetRecentPlayersCallbackProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UGetRecentPlayersCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintGetRecentPlayersDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintGetRecentPlayersDelegate OnFailure;
    
    UGetRecentPlayersCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGetRecentPlayersCallbackProxy* GetAndStoreRecentPlayersList(UObject* WorldContextObject, const FBPUniqueNetId& UniqueNetId);
    
};

