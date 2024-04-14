#pragma once
#include "CoreMinimal.h"
#include "BPOnlineRecentPlayer.h"
#include "BlueprintGetRecentPlayersDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintGetRecentPlayersDelegate, const TArray<FBPOnlineRecentPlayer>&, Results);

