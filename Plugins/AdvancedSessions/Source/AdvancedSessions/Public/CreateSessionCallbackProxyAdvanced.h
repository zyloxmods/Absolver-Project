#pragma once
#include "CoreMinimal.h"


#include "ESessionTypes.h"
#include "SessionPropertyKeyPair.h"
#include "CreateSessionCallbackProxyAdvanced.generated.h"

class APlayerController;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UCreateSessionCallbackProxyAdvanced : public UObject {
    GENERATED_BODY()
public:
/*    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;*/
    
    UCreateSessionCallbackProxyAdvanced();

   // UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
  //  static UCreateSessionCallbackProxyAdvanced* CreateAdvancedSession(UObject* WorldContextObject, const TArray<FSessionPropertyKeyPair>& ExtraSettings, APlayerController* PlayerController, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, ESessionTypes eSessionType);
    
};

